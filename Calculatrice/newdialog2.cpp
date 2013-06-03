#include "newdialog2.h"
#include "ui_newdialog2.h"

NewDialog2::NewDialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewDialog2)
{
    ui->setupUi(this);
}

NewDialog2::~NewDialog2()
{
    delete ui;
}

void NewDialog2::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
