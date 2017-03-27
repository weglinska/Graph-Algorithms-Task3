/****************************************************************************
** Meta object code from reading C++ file 'matrixview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Grafy3/matrixview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matrixview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MatrixView_t {
    QByteArrayData data[8];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatrixView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatrixView_t qt_meta_stringdata_MatrixView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MatrixView"
QT_MOC_LITERAL(1, 11, 7), // "changed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "sender"
QT_MOC_LITERAL(4, 27, 11), // "cellChanged"
QT_MOC_LITERAL(5, 39, 11), // "coordinates"
QT_MOC_LITERAL(6, 51, 5), // "value"
QT_MOC_LITERAL(7, 57, 6) // "update"

    },
    "MatrixView\0changed\0\0sender\0cellChanged\0"
    "coordinates\0value\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatrixView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x0a /* Public */,
       7,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void,

       0        // eod
};

void MatrixView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MatrixView *_t = static_cast<MatrixView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->cellChanged((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->update((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MatrixView::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MatrixView::changed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MatrixView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MatrixView.data,
      qt_meta_data_MatrixView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MatrixView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatrixView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MatrixView.stringdata0))
        return static_cast<void*>(const_cast< MatrixView*>(this));
    return QWidget::qt_metacast(_clname);
}

int MatrixView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MatrixView::changed(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
