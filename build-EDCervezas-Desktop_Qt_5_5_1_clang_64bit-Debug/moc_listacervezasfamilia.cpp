/****************************************************************************
** Meta object code from reading C++ file 'listacervezasfamilia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EDCervezas/listacervezasfamilia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listacervezasfamilia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ListaCervezasFamilia_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListaCervezasFamilia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListaCervezasFamilia_t qt_meta_stringdata_ListaCervezasFamilia = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ListaCervezasFamilia"
QT_MOC_LITERAL(1, 21, 20), // "on_btnatras5_clicked"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "ListaCervezasFamilia\0on_btnatras5_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListaCervezasFamilia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ListaCervezasFamilia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListaCervezasFamilia *_t = static_cast<ListaCervezasFamilia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnatras5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ListaCervezasFamilia::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListaCervezasFamilia.data,
      qt_meta_data_ListaCervezasFamilia,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ListaCervezasFamilia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListaCervezasFamilia::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ListaCervezasFamilia.stringdata0))
        return static_cast<void*>(const_cast< ListaCervezasFamilia*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListaCervezasFamilia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
