/*
   Implementación de las funciones del spin Box sobre
   la matriz de adyacencia



*/


#include "doublespinboxdelegate.h"
#include <QDoubleSpinBox>

DoubleSpinBoxDelegate::DoubleSpinBoxDelegate(QObject *parent)
    : QItemDelegate(parent)
{

}

QWidget *DoubleSpinBoxDelegate::createEditor(QWidget *parent,
const QStyleOptionViewItem &, const QModelIndex &) const
{
   //Definir rango de los costos
   auto doubleSpinBox = new QDoubleSpinBox(parent);
   doubleSpinBox->setMinimum(-99999999999.999);
   doubleSpinBox->setMaximum(+99999999999.999);
   return doubleSpinBox;
}
// Funciones para eventos del spin box
void DoubleSpinBoxDelegate::setEditorData(QWidget *editor,
const QModelIndex &index) const
{
 auto doubleSpinBox = static_cast<QDoubleSpinBox *>(editor);
 doubleSpinBox->setValue(index.data().toDouble());
}

void DoubleSpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
const QModelIndex &index) const
{
 auto doubleSpinBox = static_cast<QDoubleSpinBox *>(editor);
 model->setData(index, doubleSpinBox->value());
}

void DoubleSpinBoxDelegate::updateEditorGeometry(QWidget *editor,
const QStyleOptionViewItem &option, const QModelIndex &) const
{
    editor->setGeometry(option.rect);
}
