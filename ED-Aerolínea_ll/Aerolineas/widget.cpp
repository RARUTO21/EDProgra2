#include "widget.h"
#include "ui_widget.h"
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include "doublespinboxdelegate.h"
#include "solve.h"
#include "solvedijkstra.h"
#include "solvekruskal.h"
#include "solveprim.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //this->AreaRender = new RenderArea();
    // Crea la red interna, con 6 nodos, con 5 de alcance
    // y los nodos se generan entre 600 a 500 (area )
    //this->W = new WireLess(15,25.0,500,400);
    u = 0;
    f = -1;
    mModelA = new QStandardItemModel(this);
    ui->tableWidgetA->setModel(mModelA);
    ui->tableWidgetA->setItemDelegate(new DoubleSpinBoxDelegate(this));
}

Widget::~Widget()
{
    delete ui;
}
// Eventos de los botones de la interfaz
void Widget::on_NumeroDeFilasSpinBoxA_valueChanged(int arg1)
{
    mModelA->setRowCount(arg1);
    mModelA->setColumnCount(arg1);

}

void Widget::on_btnPrepararTabla_clicked()
{
    ui->MatrizAdyacencia->setColumnCount(1);

    QStringList l;
    l<<"Ciudad";
    ui->MatrizAdyacencia->setHorizontalHeaderLabels(l);

    ui->MatrizAdyacencia->setColumnWidth(0,95);

}

void Widget::on_btnInsertarRegistro_clicked()
{
    u++;
    QByteArray d;
    d.append("Ciudad");
    d.append(QString::number(u));

    ui->MatrizAdyacencia->insertRow(ui->MatrizAdyacencia->rowCount());
    ui->MatrizAdyacencia->setItem(ui->MatrizAdyacencia->rowCount()-1, 0, new QTableWidgetItem(d.constData()));


}

void Widget::on_btnBorrarSeleccion_clicked()
{
    ui->MatrizAdyacencia->removeRow(f);
}

void Widget::on_btnBorrarTodo_clicked()
{
  ui->MatrizAdyacencia->setRowCount(0);
}

void Widget::on_MatrizAdyacencia_itemClicked(QTableWidgetItem *item)
{
    f = item->row();
    QTableWidgetItem *ciudad = ui->MatrizAdyacencia->item(f,0);

    ui->lineEditCiudad->setText(ciudad->text());

}

void Widget::on_pushButtonAgregar_clicked()
{
    ui->MatrizAdyacencia->setItem(f,0, new QTableWidgetItem(ui->lineEditCiudad->text()));
}

void Widget::on_btnFloyd_clicked()
{
    // Algoritmo de Floyd
    solve * Widget = new solve();
    Widget ->show();
    close();


}

void Widget::on_btnDijkstra_clicked()
{
    solveDijkstra * Widget = new solveDijkstra();
    Widget ->show();
    close();
}

void Widget::on_btnPrim_clicked()
{
    solvePrim * Widget = new solvePrim();
    Widget ->show();
    close();
}

void Widget::on_btnKruskal_clicked()
{
    solveKruskal * Widget = new solveKruskal();
    Widget ->show();
    close();
}

void Widget::on_pbAddArista_clicked()
{
    /*this->W->grafo->addArista(ui->leInicio->text().toInt(),
                           ui->leFinal->text().toInt(),
                           ui->lePeso->text().toFloat());

    this->AreaRender->update();*/
}

void Widget::on_leInicio_cursorPositionChanged(int arg1, int arg2)
{
  // se agrega el valor del primer nodo
}
