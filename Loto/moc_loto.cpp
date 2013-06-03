/****************************************************************************
** Meta object code from reading C++ file 'loto.h'
**
** Created: Thu Jan 17 18:50:42 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loto.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_loto[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      35,    5,    5,    5, 0x08,
      62,    5,    5,    5, 0x08,
      93,    5,    5,    5, 0x08,
     110,    5,    5,    5, 0x08,
     136,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_loto[] = {
    "loto\0\0on_pushButtonTirer_clicked()\0"
    "on_action_Quit_triggered()\0"
    "on_pushButton_Tirage_clicked()\0"
    "remplirLaBoule()\0on_pushButton_2_clicked()\0"
    "permuterElement()\0"
};

const QMetaObject loto::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_loto,
      qt_meta_data_loto, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &loto::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *loto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *loto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_loto))
        return static_cast<void*>(const_cast< loto*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int loto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonTirer_clicked(); break;
        case 1: on_action_Quit_triggered(); break;
        case 2: on_pushButton_Tirage_clicked(); break;
        case 3: remplirLaBoule(); break;
        case 4: on_pushButton_2_clicked(); break;
        case 5: permuterElement(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
