/****************************************************************************
** Meta object code from reading C++ file 'keti_vision.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keti_vision.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keti_vision.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Keti_vision_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Keti_vision_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Keti_vision_t qt_meta_stringdata_Keti_vision = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Keti_vision"
QT_MOC_LITERAL(1, 12, 16), // "SIGNAL_LOG_WRITE"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "msgSignal"
QT_MOC_LITERAL(4, 40, 12), // "connect_flag"
QT_MOC_LITERAL(5, 53, 14), // "onReadyCmdRead"
QT_MOC_LITERAL(6, 68, 15), // "onKetiConnected"
QT_MOC_LITERAL(7, 84, 18) // "onKetidisConnected"

    },
    "Keti_vision\0SIGNAL_LOG_WRITE\0\0msgSignal\0"
    "connect_flag\0onReadyCmdRead\0onKetiConnected\0"
    "onKetidisConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Keti_vision[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Keti_vision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Keti_vision *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SIGNAL_LOG_WRITE(); break;
        case 1: _t->msgSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onReadyCmdRead(); break;
        case 3: _t->onKetiConnected(); break;
        case 4: _t->onKetidisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Keti_vision::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keti_vision::SIGNAL_LOG_WRITE)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Keti_vision::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keti_vision::msgSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Keti_vision::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Keti_vision.data,
    qt_meta_data_Keti_vision,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Keti_vision::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Keti_vision::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Keti_vision.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Keti_vision::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Keti_vision::SIGNAL_LOG_WRITE()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Keti_vision::msgSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
