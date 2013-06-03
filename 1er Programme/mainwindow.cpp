#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::on_pushButton_clicked()
{
    QString nouvelleCouleur=ui->lineEditNewColor->text();
    ui->listWidgetCouleur->addItem(nouvelleCouleur);
}

void MainWindow::on_pushButton_2_clicked()
{
    //J'enlève la couleur.
    ui->listWidgetCouleur->takeItem(ui->listWidgetCouleur->currentRow());
}

void MainWindow::on_listWidgetCouleur_currentRowChanged(int currentRow)
{
    //afficher dans le lineEditNewName la couleur sélectionné.
    ui->lineEditNewName->setText(ui->listWidgetCouleur->currentItem()->text());
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->listWidgetCouleur->currentItem()->setText(ui->lineEditNewName->text());
}
