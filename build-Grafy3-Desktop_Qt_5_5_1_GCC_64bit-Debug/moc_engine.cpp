/****************************************************************************
** Meta object code from reading C++ file 'engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Grafy3/engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Engine_t {
    QByteArrayData data[12];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Engine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Engine_t qt_meta_stringdata_Engine = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Engine"
QT_MOC_LITERAL(1, 7, 12), // "changedGraph"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "sender"
QT_MOC_LITERAL(4, 28, 7), // "setPath"
QT_MOC_LITERAL(5, 36, 16), // "std::vector<int>"
QT_MOC_LITERAL(6, 53, 4), // "path"
QT_MOC_LITERAL(7, 58, 11), // "updateGraph"
QT_MOC_LITERAL(8, 70, 15), // "changeGraphSize"
QT_MOC_LITERAL(9, 86, 7), // "newSize"
QT_MOC_LITERAL(10, 94, 8), // "setGraph"
QT_MOC_LITERAL(11, 103, 6) // "Graph*"

    },
    "Engine\0changedGraph\0\0sender\0setPath\0"
    "std::vector<int>\0path\0updateGraph\0"
    "changeGraphSize\0newSize\0setGraph\0"
    "Graph*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Engine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void Engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Engine *_t = static_cast<Engine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changedGraph((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->setPath((*reinterpret_cast< std::vector<int>(*)>(_a[1]))); break;
        case 2: _t->updateGraph((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->updateGraph(); break;
        case 4: _t->changeGraphSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setGraph((*reinterpret_cast< Graph*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Engine::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Engine::changedGraph)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Engine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Engine.data,
      qt_meta_data_Engine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Engine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Engine.stringdata0))
        return static_cast<void*>(const_cast< Engine*>(this));
    return QObject::qt_metacast(_clname);
}

int Engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Engine::changedGraph(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
