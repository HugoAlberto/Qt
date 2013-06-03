#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QMainWindow>
#include <newdialog.h>
#include <newdialog2.h>

namespace Ui {
    class calculatrice;
}

class calculatrice : public QMainWindow {
    Q_OBJECT
public:
    calculatrice(QWidget *parent = 0);
    ~calculatrice();
    //Déclaration des entier.
    int num;
    int num1;
    int total;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::calculatrice *ui;
    //Déclaration des deux fenêtres.
    NewDialog *newDialog;
    NewDialog2 *newDialog2;
    //Déclaration des QStrings.
    QString text;
    QString signe;
    QString str;
    QString str1;
    QString Result;

private slots:
    void on_action_Known_bugs_triggered();
    void on_bEgual_clicked();
    void on_bPlus_clicked();
    void on_bMoins_clicked();
    void on_b0_clicked();
    void on_b9_clicked();
    void on_b8_clicked();
    void on_b7_clicked();
    void on_b6_clicked();
    void on_b5_clicked();
    void on_b4_clicked();
    void on_b3_clicked();
    void on_b2_clicked();
    void on_b1_clicked();
    void on_reset_clicked();
    void on_action_Quit_triggered();
    void on_actionAboutMe_triggered();
};

#endif // CALCULATRICE_H
