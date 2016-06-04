#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"

#include <QStandardItemModel>

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    u = 0;
    f = -1;
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::on_btnPrepararTabla_clicked()
{
    ui->MatrizAdyacencia->setColumnCount(4);

    QStringList l;
    l<<"Ciudad1"<<"Ciudad2"<<"Ciudad3"<<"Ciudad4";
    ui->MatrizAdyacencia->setHorizontalHeaderLabels(l);

    ui->MatrizAdyacencia->setColumnWidth(0,70);
    ui->MatrizAdyacencia->setColumnWidth(1,70);
    ui->MatrizAdyacencia->setColumnWidth(2,70);
    ui->MatrizAdyacencia->setColumnWidth(3,70);
}

void VentanaPrincipal::on_btnInsertarRegistro_clicked()
{
    u++;
    QByteArray d;
    d.append("Ciudad");
    d.append(QString::number(u));

    ui->MatrizAdyacencia->insertRow(ui->MatrizAdyacencia->rowCount());
    ui->MatrizAdyacencia->setItem(ui->MatrizAdyacencia->rowCount()-1, 0, new QTableWidgetItem(d.constData()));
    ui->MatrizAdyacencia->setItem(ui->MatrizAdyacencia->rowCount()-1, 1, new QTableWidgetItem("350"));
    ui->MatrizAdyacencia->setItem(ui->MatrizAdyacencia->rowCount()-1, 2, new QTableWidgetItem("200"));
    ui->MatrizAdyacencia->setItem(ui->MatrizAdyacencia->rowCount()-1, 3, new QTableWidgetItem("500"));
}

void VentanaPrincipal::on_btnBorrarSeleccion_clicked()
{
   ui->MatrizAdyacencia->removeRow(f);

}

void VentanaPrincipal::on_btnBorrarTodo_clicked()
{
   ui->MatrizAdyacencia->setRowCount(0);
}

void VentanaPrincipal::on_MatrizAdyacencia_itemClicked(QTableWidgetItem *item)
{
 f = item->row();

}
