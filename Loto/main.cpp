#include <QtGui/QApplication>
#include "loto.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loto w;
    w.show();
    return a.exec();
}
