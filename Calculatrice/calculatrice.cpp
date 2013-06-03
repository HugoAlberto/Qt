#include "calculatrice.h"
#include "ui_calculatrice.h"

calculatrice::calculatrice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculatrice)
{
    ui->setupUi(this);
}

calculatrice::~calculatrice()
{
    delete ui;
}

void calculatrice::changeEvent(QEvent *e)
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

void calculatrice::on_actionAboutMe_triggered()
{
    //Ouverture de la fenettre "AboutMe"
    newDialog=new NewDialog(this);
    newDialog->show();
    newDialog->raise();
    newDialog->activateWindow();
}


void calculatrice::on_action_Known_bugs_triggered()
{
    //Ouverture de la fenettre "Known bugs"
    newDialog2=new NewDialog2(this);
    newDialog2->show();
    newDialog2->raise();
    newDialog2->activateWindow();
}


void calculatrice::on_action_Quit_triggered()
{
    this->close();
}

void calculatrice::on_reset_clicked()
{
    text="";
    ui->screen->clear();
}

void calculatrice::on_b1_clicked()
{
    text+=ui->b1->text();
    ui->screen->setText(text);
}

void calculatrice::on_b2_clicked()
{
    text+=ui->b2->text();
    ui->screen->setText(text);
}

void calculatrice::on_b3_clicked()
{
    text+=ui->b3->text();
    ui->screen->setText(text);
}

void calculatrice::on_b4_clicked()
{
    text+=ui->b4->text();
    ui->screen->setText(text);
}

void calculatrice::on_b5_clicked()
{
    text+=ui->b5->text();
    ui->screen->setText(text);
}

void calculatrice::on_b6_clicked()
{
    text+=ui->b6->text();
    ui->screen->setText(text);
}

void calculatrice::on_b7_clicked()
{
    text+=ui->b7->text();
    ui->screen->setText(text);
}

void calculatrice::on_b8_clicked()
{
    text+=ui->b8->text();
    ui->screen->setText(text);
}

void calculatrice::on_b9_clicked()
{
    text+=ui->b9->text();
    ui->screen->setText(text);
}

void calculatrice::on_b0_clicked()
{
    text+=ui->b0->text();
    ui->screen->setText(text);
}

void calculatrice::on_bMoins_clicked()
{
    str=ui->screen->text();
    num=str.toFloat();
    signe=ui->bMoins->text();
    ui->screen->clear();
    text="";
}

void calculatrice::on_bPlus_clicked()
{
    str=ui->screen->text();
    num=str.toFloat();
    signe=ui->bPlus->text();
    ui->screen->clear();
    text="";
}

void calculatrice::on_bEgual_clicked()
{
    str1 = ui->screen->text();
    num1 = str1.toInt();

    if (signe=="+")//Si le signe est plus.
    {
            total=num+num1;
    }
    else if(signe=="-")//Si le signe est moins.
    {
            total=num-num1;
    }
    else
    {
           Result = Result.number(total);
            ui->screen->setText(Result);
    }
    Result = Result.number(total);
    ui->screen->setText(Result);
    signe="";
    text=Result;
}
