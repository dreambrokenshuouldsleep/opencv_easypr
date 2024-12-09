/****************************************************************************
** Meta object code from reading C++ file 'sql.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sql_t {
    QByteArrayData data[19];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sql_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sql_t qt_meta_stringdata_sql = {
    {
QT_MOC_LITERAL(0, 0, 3), // "sql"
QT_MOC_LITERAL(1, 4, 9), // "send_stay"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 9), // "free_time"
QT_MOC_LITERAL(4, 25, 6), // "access"
QT_MOC_LITERAL(5, 32, 8), // "send_msg"
QT_MOC_LITERAL(6, 41, 9), // "recv_time"
QT_MOC_LITERAL(7, 51, 7), // "license"
QT_MOC_LITERAL(8, 59, 4), // "date"
QT_MOC_LITERAL(9, 64, 4), // "time"
QT_MOC_LITERAL(10, 69, 9), // "recv_card"
QT_MOC_LITERAL(11, 79, 4), // "card"
QT_MOC_LITERAL(12, 84, 10), // "begin_date"
QT_MOC_LITERAL(13, 95, 10), // "begin_time"
QT_MOC_LITERAL(14, 106, 8), // "end_date"
QT_MOC_LITERAL(15, 115, 8), // "end_time"
QT_MOC_LITERAL(16, 124, 1), // "i"
QT_MOC_LITERAL(17, 126, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(18, 153, 21) // "on_pushButton_clicked"

    },
    "sql\0send_stay\0\0free_time\0access\0"
    "send_msg\0recv_time\0license\0date\0time\0"
    "recv_card\0card\0begin_date\0begin_time\0"
    "end_date\0end_time\0i\0on_pushButton_back_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sql[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   50,    2, 0x0a /* Public */,
      10,    6,   57,    2, 0x0a /* Public */,
      17,    0,   70,    2, 0x08 /* Private */,
      18,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   11,   12,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sql *_t = static_cast<sql *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_stay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->send_msg(); break;
        case 2: _t->recv_time((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->recv_card((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 4: _t->on_pushButton_back_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sql::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sql::send_stay)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (sql::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sql::send_msg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject sql::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_sql.data,
      qt_meta_data_sql,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sql::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sql.stringdata0))
        return static_cast<void*>(const_cast< sql*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int sql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void sql::send_stay(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sql::send_msg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
