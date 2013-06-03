#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSqlRelationalTableModel>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QString>
#include <QFileDialog>
#include <QSqlQueryModel>
#include "ui_dialog.h"
#include <QTableWidgetItem>
#include <QDebug>

/*-----------------------------------------------------------*\
**                 Création de la MainWindow                 **
\*-----------------------------------------------------------*/
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Prise en compte de l'UTF-8 pour les chaînes en dur dans le code
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //Connexion à la base
    baseCommerciale=QSqlDatabase::addDatabase("QMYSQL");
    baseCommerciale.setHostName("localhost");
    baseCommerciale.setUserName("-----");
    baseCommerciale.setPassword("----------");
    baseCommerciale.setDatabaseName("db_reparation");
    if(!baseCommerciale.open())
    {
        QMessageBox::warning(this,this->windowTitle(),"Serveur inaccessible");
        close();
    }
    else
    {
        ui->statusBar->showMessage("Connexion à la base réussie.");
        on_actionActualiser_le_Catalogue_triggered();
        on_actionActualiser_les_Vehicules_triggered();

        modelRechercheVehicule.setQuery("SELECT * FROM VEHICULE");
        ui->tableViewVehicule->setModel(&modelRechercheVehicule);
        connect(ui->lineEditImmatriculation, SIGNAL(textChanged(QString)),this,SLOT(rechercheVehicule()));
        connect(ui->lineEditType, SIGNAL(textChanged(QString)),this,SLOT(rechercheVehicule()));
        connect(ui->lineEditCarburant, SIGNAL(textChanged(QString)),this,SLOT(rechercheVehicule()));
        connect(ui->lineEditMarque, SIGNAL(textChanged(QString)),this,SLOT(rechercheVehicule()));
        connect(ui->lineEditCouleur, SIGNAL(textChanged(QString)),this,SLOT(rechercheVehicule()));
        //Ajout d'un nouveau tableau pour l'ajout d'un vehicule
        modelVehicules = new QSqlRelationalTableModel(this,baseCommerciale);
        modelVehicules->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
        modelVehicules->setTable("VEHICULE");
        modelVehicules->select();
        //Panier
        ui->comboBoxDesignationPiece->setModel(modelPiece);
        ui->comboBoxDesignationPiece->setModelColumn(1);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

//Quand le Bouton quitter est cliqué
void MainWindow::on_action_Quitter_triggered()
{
    if(QMessageBox::question(this,this->windowTitle(),tr("Souhaitez-vous vraiment quitter ?"),
                             QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Ok)
    {
        close();
    }
}

//Quand le bouton actualiser le catalogue est cliqué
void MainWindow::on_actionActualiser_le_Catalogue_triggered()
{
    modelPiece = new QSqlRelationalTableModel(this,baseCommerciale);
    modelPiece->setTable("PIECE");
    modelPiece->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
    modelPiece->select();
    modelPiece->setHeaderData(0, Qt::Horizontal, "Numéro");
    modelPiece->setHeaderData(1, Qt::Horizontal, "Libelle");
    modelPiece->setHeaderData(2, Qt::Horizontal, "Prix Unitaire");
    ui->tableViewCatalogue->setModel(modelPiece);
    ui->tableViewCatalogue->show();
    ui->tabWidget->setCurrentIndex(0);
    ui->tableViewCatalogue->resizeColumnsToContents();
}

//Quand le bouton ajouter un produit est cliqué
void MainWindow::on_pushButtonAjoutPiece_clicked()
{
    QSqlRecord nouvellePiece=modelPiece->record();
    QSqlQuery sql("SELECT max(numero)+1 FROM PIECE");
    sql.next();
    int numeroPieceOk=sql.value(0).toInt();
    nouvellePiece.setValue("numero",numeroPieceOk);
    modelPiece->insertRecord(-1,nouvellePiece);
    ui->statusBar->showMessage("Ajout d'une nouvelle ligne dans la base de donnée effectué.");
}

//Quand le bouton supprimer un produit est cliqué
void MainWindow::on_pushButtonSupprPiece_clicked()
{
    int ligneSelectionnee=ui->tableViewCatalogue->selectionModel()->currentIndex().row();
    modelPiece->removeRow(ligneSelectionnee);
    ui->statusBar->showMessage("Supression de la ligne dans la base de donnée effectué.");
}

//Quand le bouton actualiser les Vehicules est cliqué
void MainWindow::on_actionActualiser_les_Vehicules_triggered()
{
    modelVehicule = new QSqlRelationalTableModel(this,baseCommerciale);
    modelVehicule->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
    modelVehicule->select();
    modelVehicule->setHeaderData(0, Qt::Horizontal, "Numéro Immatriculation");
    modelVehicule->setHeaderData(1, Qt::Horizontal, "Nom");
    modelVehicule->setHeaderData(2, Qt::Horizontal, "Prénom");
    modelVehicule->setHeaderData(3, Qt::Horizontal, "Ville");
    modelVehicule->setHeaderData(4, Qt::Horizontal, "Code Postal");
    modelVehicule->setHeaderData(5, Qt::Horizontal, "Rue");
    modelVehicule->setHeaderData(6, Qt::Horizontal, "Téléphone");
    modelVehicule->setHeaderData(7, Qt::Horizontal, "Mail");
    ui->tableViewVehicule->setModel(modelVehicule);
    ui->tableViewVehicule->show();
    ui->tabWidget->setCurrentIndex(0);
    ui->tableViewVehicule->resizeColumnsToContents();
}

//Procédure qui permet de rechercher un Vehicule en fonction des données rentrés
void MainWindow::rechercheVehicule()
{
    QString where="";
    QStringList listeRecherche;
    //Si id est recherché, elle est ajouté au WHERE
    if(ui->lineEditImmatriculation->text()!="")
    {
        listeRecherche.append("noImmat LIKE '%"+ui->lineEditImmatriculation->text()+"%'");
    }
    if(ui->lineEditType->text()!="")
    {
        listeRecherche.append("type LIKE '%"+ui->lineEditType->text()+"%'");
    }
    if(ui->lineEditCarburant->text()!="")
    {
        listeRecherche.append("carburant LIKE '%"+ui->lineEditCarburant->text()+"%'");
    }
    if(ui->lineEditMarque->text()!="")
    {
        listeRecherche.append("marque LIKE '%"+ui->lineEditMarque->text()+"%'");
    }
    if(ui->lineEditCouleur->text()!="")
    {
        listeRecherche.append("couleur LIKE '%"+ui->lineEditCouleur->text()+"%'");
    }
    //Ajout d'un AND entre chaque recherche
    if(listeRecherche.count()>0)
    {
        where="WHERE "+listeRecherche.join(" AND ");
    }
    QString requete="SELECT * FROM VEHICULE "+where;
    modelRechercheVehicule.setQuery(requete);
}

void MainWindow::on_pushButtonAjoutVehicule_clicked()
{
    Dialog * formNouveauVehicule=new Dialog(this);
    if(formNouveauVehicule->exec()==QDialog::Accepted)
    {
      //Enregistrement d'un nouveau Vehicule
        QSqlRecord recordVehicule=modelVehicules->record();
        recordVehicule.setValue("noImmat",formNouveauVehicule->ui->lineEditImmatriculation2->text());
        recordVehicule.setValue("type",formNouveauVehicule->ui->lineEditType2->text());
        recordVehicule.setValue("carburant",formNouveauVehicule->ui->lineEditCarburant2->text());
        recordVehicule.setValue("marque",formNouveauVehicule->ui->lineEditMarque2->text());
        recordVehicule.setValue("couleur",formNouveauVehicule->ui->lineEditCouleur2->text());
        if(modelVehicules->insertRecord(-1,recordVehicule))
        {
            ui->statusBar->showMessage("Vehicule Ajouté");
        }
        else
        {
            ui->statusBar->showMessage("Le Vehicule n'a pas été Ajouté");
        }
    }
}

void MainWindow::on_pushButtonAjoutPiece_2_clicked()
{
    //Ajout d'un ligne
    ui->tableWidgetPanier->insertRow(ui->tableWidgetPanier->rowCount());
    ui->comboBoxDesignationPiece->setModelColumn(1);
    //Current text du libelle de la piece
    QTableWidgetItem * itemDesignationPiece=new QTableWidgetItem(ui->comboBoxDesignationPiece->currentText());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,0,itemDesignationPiece);
    //Heures de main d'oeuvre
    QTableWidgetItem * itemHMO=new QTableWidgetItem(ui->spinBoxHMO->text());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,1,itemHMO);
    ui->comboBoxDesignationPiece->setModelColumn(2);
    //Pri unitaire
    QTableWidgetItem * itemPu=new QTableWidgetItem(ui->comboBoxDesignationPiece->currentText());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,2,itemPu);
    //Quantité
    QTableWidgetItem * itemQuantite=new QTableWidgetItem(ui->spinBoxQuantite->text());
    ui->tableWidgetPanier->setItem(ui->tableWidgetPanier->rowCount()-1,3,itemQuantite);
    float pu = ui->comboBoxDesignationPiece->currentText().toFloat();
    qDebug()<<pu;
    int main= ui->spinBoxHMO->text().toInt();
    int qte = ui->spinBoxQuantite->text().toInt();
    int montant = (main*40)+(qte*pu);
    //QSTRING NUMBER//
    ui->labelMontantTotal->setText(QString::number(montant));

    ui->comboBoxDesignationPiece->setModelColumn(1);
}
