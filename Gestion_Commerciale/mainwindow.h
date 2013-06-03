#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlDatabase>
#include <QImage>
#include <QSqlQueryModel>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QSqlDatabase baseCommerciale;
    QSqlRelationalTableModel * modelPiece;
    QSqlRelationalTableModel * modelVehicule;
    QSqlRelationalTableModel * modelVehicules;
    QSqlQueryModel modelRechercheVehicule;

private slots:
    void on_pushButtonAjoutVehicule_clicked();
    void on_pushButtonAjoutPiece_2_clicked();
    void on_actionActualiser_les_Vehicules_triggered();
    void on_pushButtonSupprPiece_clicked();
    void on_pushButtonAjoutPiece_clicked();
    void on_actionActualiser_le_Catalogue_triggered();
    void on_action_Quitter_triggered();
    void rechercheVehicule();
};

#endif // MAINWINDOW_H
