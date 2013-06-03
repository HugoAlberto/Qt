#ifndef LOTO_H
#define LOTO_H

#include <QMainWindow>
#include<QTimer>

namespace Ui {
    class loto;
}

class loto : public QMainWindow {
    Q_OBJECT
public:
    loto(QWidget *parent = 0);
    ~loto();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::loto *ui;
    //Déclaration d'un pointeur sur un objet de la class QTimer.
    QTimer * timerMelange;
    int nbDeRepetition;

private slots:
    void on_pushButtonTirer_clicked();
    void on_action_Quit_triggered();
    void on_pushButton_Tirage_clicked();
    void remplirLaBoule();
    void on_pushButton_2_clicked();
    void permuterElement();
};

#endif // LOTO_H
