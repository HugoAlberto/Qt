/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu May 2 18:07:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     131,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,
     199,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     274,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonAjoutVehicule_clicked()\0"
    "on_pushButtonAjoutPiece_2_clicked()\0"
    "on_actionActualiser_les_Vehicules_triggered()\0"
    "on_pushButtonSupprPiece_clicked()\0"
    "on_pushButtonAjoutPiece_clicked()\0"
    "on_actionActualiser_le_Catalogue_triggered()\0"
    "on_action_Quitter_triggered()\0"
    "rechercheVehicule()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonAjoutVehicule_clicked(); break;
        case 1: on_pushButtonAjoutPiece_2_clicked(); break;
        case 2: on_actionActualiser_les_Vehicules_triggered(); break;
        case 3: on_pushButtonSupprPiece_clicked(); break;
        case 4: on_pushButtonAjoutPiece_clicked(); break;
        case 5: on_actionActualiser_le_Catalogue_triggered(); break;
        case 6: on_action_Quitter_triggered(); break;
        case 7: rechercheVehicule(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE