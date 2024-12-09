/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[26];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 8), // "run_stop"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "send_time"
QT_MOC_LITERAL(4, 27, 7), // "license"
QT_MOC_LITERAL(5, 35, 4), // "date"
QT_MOC_LITERAL(6, 40, 4), // "time"
QT_MOC_LITERAL(7, 45, 8), // "send_str"
QT_MOC_LITERAL(8, 54, 4), // "card"
QT_MOC_LITERAL(9, 59, 10), // "begin_date"
QT_MOC_LITERAL(10, 70, 10), // "begin_time"
QT_MOC_LITERAL(11, 81, 8), // "end_date"
QT_MOC_LITERAL(12, 90, 8), // "end_time"
QT_MOC_LITERAL(13, 99, 1), // "i"
QT_MOC_LITERAL(14, 101, 10), // "recv_image"
QT_MOC_LITERAL(15, 112, 5), // "image"
QT_MOC_LITERAL(16, 118, 8), // "set_time"
QT_MOC_LITERAL(17, 127, 25), // "on_pushButton_sql_clicked"
QT_MOC_LITERAL(18, 153, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(19, 180, 28), // "on_pushButton_return_clicked"
QT_MOC_LITERAL(20, 209, 26), // "on_pushButton_cash_clicked"
QT_MOC_LITERAL(21, 236, 9), // "recv_stay"
QT_MOC_LITERAL(22, 246, 9), // "free_time"
QT_MOC_LITERAL(23, 256, 6), // "access"
QT_MOC_LITERAL(24, 263, 9), // "recv_card"
QT_MOC_LITERAL(25, 273, 8) // "sql_back"

    },
    "Widget\0run_stop\0\0send_time\0license\0"
    "date\0time\0send_str\0card\0begin_date\0"
    "begin_time\0end_date\0end_time\0i\0"
    "recv_image\0image\0set_time\0"
    "on_pushButton_sql_clicked\0"
    "on_pushButton_stop_clicked\0"
    "on_pushButton_return_clicked\0"
    "on_pushButton_cash_clicked\0recv_stay\0"
    "free_time\0access\0recv_card\0sql_back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    3,   75,    2, 0x06 /* Public */,
       7,    6,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   95,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,
      20,    0,  102,    2, 0x08 /* Private */,
      21,    2,  103,    2, 0x08 /* Private */,
      24,    6,  108,    2, 0x08 /* Private */,
      25,    0,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,    9,   10,   11,   12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run_stop(); break;
        case 1: _t->send_time((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->send_str((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->recv_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->set_time(); break;
        case 5: _t->on_pushButton_sql_clicked(); break;
        case 6: _t->on_pushButton_stop_clicked(); break;
        case 7: _t->on_pushButton_return_clicked(); break;
        case 8: _t->on_pushButton_cash_clicked(); break;
        case 9: _t->recv_stay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->recv_card((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 11: _t->sql_back(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::run_stop)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::send_time)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(QString , QString , QString , QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::send_str)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Widget::run_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Widget::send_time(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::send_str(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, int _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
