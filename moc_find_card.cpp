/****************************************************************************
** Meta object code from reading C++ file 'find_card.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "find_card.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'find_card.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_find_card_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_find_card_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_find_card_t qt_meta_stringdata_find_card = {
    {
QT_MOC_LITERAL(0, 0, 9), // "find_card"
QT_MOC_LITERAL(1, 10, 8), // "send_msg"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "card"
QT_MOC_LITERAL(4, 25, 10), // "begin_date"
QT_MOC_LITERAL(5, 36, 10), // "begin_time"
QT_MOC_LITERAL(6, 47, 8), // "end_date"
QT_MOC_LITERAL(7, 56, 8), // "end_time"
QT_MOC_LITERAL(8, 65, 1), // "i"
QT_MOC_LITERAL(9, 67, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(10, 91, 21) // "on_pushButton_clicked"

    },
    "find_card\0send_msg\0\0card\0begin_date\0"
    "begin_time\0end_date\0end_time\0i\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_find_card[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   42,    2, 0x08 /* Private */,
      10,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void find_card::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        find_card *_t = static_cast<find_card *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_msg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (find_card::*_t)(QString , QString , QString , QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&find_card::send_msg)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject find_card::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_find_card.data,
      qt_meta_data_find_card,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *find_card::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *find_card::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_find_card.stringdata0))
        return static_cast<void*>(const_cast< find_card*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int find_card::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void find_card::send_msg(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, int _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
