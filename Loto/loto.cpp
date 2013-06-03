#include "loto.h"
#include "ui_loto.h"
#include<QtGlobal>
#include<time.h>
#include<QDebug>

loto::loto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loto)
{
    ui->setupUi(this);
    remplirLaBoule();
    qsrand(time(NULL));
    timerMelange=new QTimer(this);
    timerMelange->setInterval(3);
    //Connection du signal timeout du timer au slot qui permute un élément de la liste.
    connect(timerMelange, SIGNAL(timeout()), this, SLOT(permuterElement()));
}

loto::~loto()
{
    delete ui;
}

void loto::changeEvent(QEvent *e)
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

void loto::remplirLaBoule()
{
    ui->pushButton_Tirage->setEnabled(false);
    ui->pushButtonTirer->setEnabled(false);
    ui->listWidgetNombres->clear();
    ui->tableWidgetAnalyse->setRowCount(49);
    //Remplissage du tableau.
    for(int i=0; i<49; i++){
        ui->listWidgetNombres->insertItem(0,QString::number(i+1));
        ui->tableWidgetAnalyse->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidgetAnalyse->setItem(i,1,new QTableWidgetItem("0"));
    }
}

void loto::on_pushButton_2_clicked()
{
    qDebug()<<"void loto::on_pushButton_2_clicked())";
    nbDeRepetition=0;
    timerMelange->start();
}

void loto::on_pushButton_Tirage_clicked()
{
    qDebug()<<"void loto::on_pushButton_Tirage_clicked(";
    //Ajout d'une nouvelle ligne.
    ui->tableWidgetTirage->insertRow(0);
    for(int no=0;no<5;no++){
        QString leNumero=ui->listWidgetNombres->item(no)->text();
        QTableWidgetItem* nouvelElement=new QTableWidgetItem(leNumero);
        ui->tableWidgetTirage->setItem(0,no,nouvelElement);
        //Stats.
        int nbFois=ui->tableWidgetAnalyse->item(leNumero.toInt()-1,1)->text().toInt();
        nbFois++;
        ui->tableWidgetAnalyse->item(leNumero.toInt()-1,1)->setText(QString::number(nbFois));

    }
    ui->pushButton_Tirage->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
}

void loto::on_action_Quit_triggered()
{
    this->close();
}

void loto::permuterElement()
{
    if(nbDeRepetition<500)
    {
        int indice=qrand()%49;
        QListWidgetItem * elementEnlevee=ui->listWidgetNombres->takeItem(indice);
        ui->listWidgetNombres->insertItem(0,elementEnlevee);
        nbDeRepetition++;
        //Evolution de la barre de progresseion.
        ui->progressBarMelange->setValue(nbDeRepetition);
    }
    else
    {
        timerMelange->stop();
        ui->pushButton_Tirage->setEnabled(true);
        ui->pushButtonTirer->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
    }
}

void loto::on_pushButtonTirer_clicked()
{
    timerMelange->setInterval(1);
    for(int noTirage=0; noTirage<ui->spinBoxTirage->value();noTirage++)
    {
        this->on_pushButton_2_clicked();
        this->on_pushButton_Tirage_clicked();
    }
}
