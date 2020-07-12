/****************************************************************************
** Meta object code from reading C++ file 'fileMove.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fileMove.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileMove.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fileMove_t {
    QByteArrayData data[6];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileMove_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileMove_t qt_meta_stringdata_fileMove = {
    {
QT_MOC_LITERAL(0, 0, 8), // "fileMove"
QT_MOC_LITERAL(1, 9, 10), // "selectText"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "selectSrc"
QT_MOC_LITERAL(4, 31, 10), // "selectDest"
QT_MOC_LITERAL(5, 42, 9) // "startMove"

    },
    "fileMove\0selectText\0\0selectSrc\0"
    "selectDest\0startMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileMove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fileMove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        fileMove *_t = static_cast<fileMove *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectText(); break;
        case 1: _t->selectSrc(); break;
        case 2: _t->selectDest(); break;
        case 3: _t->startMove(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject fileMove::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fileMove.data,
      qt_meta_data_fileMove,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fileMove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileMove::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fileMove.stringdata0))
        return static_cast<void*>(const_cast< fileMove*>(this));
    return QWidget::qt_metacast(_clname);
}

int fileMove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
