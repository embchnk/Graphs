/****************************************************************************
** Meta object code from reading C++ file 'insertdatawindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../insertdatawindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insertdatawindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InsertDataWindow_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InsertDataWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InsertDataWindow_t qt_meta_stringdata_InsertDataWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InsertDataWindow"
QT_MOC_LITERAL(1, 17, 16), // "on_Check_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 26), // "on_tableWidget_cellChanged"
QT_MOC_LITERAL(4, 62, 3), // "row"
QT_MOC_LITERAL(5, 66, 6), // "column"
QT_MOC_LITERAL(6, 73, 19), // "on_PBAccept_clicked"
QT_MOC_LITERAL(7, 93, 16), // "std::vector<int>"
QT_MOC_LITERAL(8, 110, 18), // "on_PBAbort_clicked"
QT_MOC_LITERAL(9, 129, 17) // "on_PBHelp_clicked"

    },
    "InsertDataWindow\0on_Check_clicked\0\0"
    "on_tableWidget_cellChanged\0row\0column\0"
    "on_PBAccept_clicked\0std::vector<int>\0"
    "on_PBAbort_clicked\0on_PBHelp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InsertDataWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    2,   40,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    0x80000000 | 7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InsertDataWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InsertDataWindow *_t = static_cast<InsertDataWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Check_clicked(); break;
        case 1: _t->on_tableWidget_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: { std::vector<int> _r = _t->on_PBAccept_clicked();
            if (_a[0]) *reinterpret_cast< std::vector<int>*>(_a[0]) = _r; }  break;
        case 3: _t->on_PBAbort_clicked(); break;
        case 4: _t->on_PBHelp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject InsertDataWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_InsertDataWindow.data,
      qt_meta_data_InsertDataWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InsertDataWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InsertDataWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InsertDataWindow.stringdata0))
        return static_cast<void*>(const_cast< InsertDataWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int InsertDataWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
