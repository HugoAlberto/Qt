#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>

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

void MainWindow::on_action_Quitter_triggered()
{
    this->close();
}

void MainWindow::on_actionAbout_Me_triggered()
{
    if(!About_me){
        About_me = new dialog(this);
    }
   About_me->show();
   About_me->raise();
   About_me->activateWindow();
}
