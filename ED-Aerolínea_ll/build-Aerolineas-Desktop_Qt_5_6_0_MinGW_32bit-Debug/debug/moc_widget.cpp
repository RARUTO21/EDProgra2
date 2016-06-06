/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Aerolineas/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 37), // "on_NumeroDeFilasSpinBoxA_valu..."
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "arg1"
QT_MOC_LITERAL(4, 51, 27), // "on_btnPrepararTabla_clicked"
QT_MOC_LITERAL(5, 79, 30), // "on_btnInsertarRegistro_clicked"
QT_MOC_LITERAL(6, 110, 29), // "on_btnBorrarSeleccion_clicked"
QT_MOC_LITERAL(7, 140, 24), // "on_btnBorrarTodo_clicked"
QT_MOC_LITERAL(8, 165, 31), // "on_MatrizAdyacencia_itemClicked"
QT_MOC_LITERAL(9, 197, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(10, 215, 4), // "item"
QT_MOC_LITERAL(11, 220, 28), // "on_pushButtonAgregar_clicked"
QT_MOC_LITERAL(12, 249, 19), // "on_btnFloyd_clicked"
QT_MOC_LITERAL(13, 269, 22), // "on_btnDijkstra_clicked"
QT_MOC_LITERAL(14, 292, 18), // "on_btnPrim_clicked"
QT_MOC_LITERAL(15, 311, 21) // "on_btnKruskal_clicked"

    },
    "Widget\0on_NumeroDeFilasSpinBoxA_valueChanged\0"
    "\0arg1\0on_btnPrepararTabla_clicked\0"
    "on_btnInsertarRegistro_clicked\0"
    "on_btnBorrarSeleccion_clicked\0"
    "on_btnBorrarTodo_clicked\0"
    "on_MatrizAdyacencia_itemClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_pushButtonAgregar_clicked\0"
    "on_btnFloyd_clicked\0on_btnDijkstra_clicked\0"
    "on_btnPrim_clicked\0on_btnKruskal_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    0,   72,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_NumeroDeFilasSpinBoxA_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btnPrepararTabla_clicked(); break;
        case 2: _t->on_btnInsertarRegistro_clicked(); break;
        case 3: _t->on_btnBorrarSeleccion_clicked(); break;
        case 4: _t->on_btnBorrarTodo_clicked(); break;
        case 5: _t->on_MatrizAdyacencia_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_pushButtonAgregar_clicked(); break;
        case 7: _t->on_btnFloyd_clicked(); break;
        case 8: _t->on_btnDijkstra_clicked(); break;
        case 9: _t->on_btnPrim_clicked(); break;
        case 10: _t->on_btnKruskal_clicked(); break;
        default: ;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
