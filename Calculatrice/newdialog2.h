#ifndef NEWDIALOG2_H
#define NEWDIALOG2_H

#include <QDialog>

namespace Ui {
    class NewDialog2;
}

class NewDialog2 : public QDialog {
    Q_OBJECT
public:
    NewDialog2(QWidget *parent = 0);
    ~NewDialog2();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::NewDialog2 *ui;
};

#endif // NEWDIALOG2_H
