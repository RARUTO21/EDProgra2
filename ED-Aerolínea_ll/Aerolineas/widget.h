#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTableWidgetItem>
#include <QDebug>
#include "grafo.h"



namespace Ui {
class Widget;
}
class QStandardItemModel;
class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    //Eventos de los botones de la interfaz
    void on_NumeroDeFilasSpinBoxA_valueChanged(int arg1);
    void on_btnPrepararTabla_clicked();
    void on_btnInsertarRegistro_clicked();
    void on_btnBorrarSeleccion_clicked();
    void on_btnBorrarTodo_clicked();
    void on_MatrizAdyacencia_itemClicked(QTableWidgetItem *item);
    void on_pushButtonAgregar_clicked();
    void on_btnFloyd_clicked();
    void on_btnDijkstra_clicked();
    void on_btnPrim_clicked();
    void on_btnKruskal_clicked();

    void on_pbAddArista_clicked();

    void on_leInicio_cursorPositionChanged(int arg1, int arg2);

private:
    //RenderArea *AreaRender;
    //WireLess *W;
    float **A;
    void CargarTabladeGrafo();
    void CargarTablaFloyd();
    void Floyd();
    Ui::Widget *ui;
    QStandardItemModel *mModelA;
    int u;
    int f;
};

#endif // WIDGET_H
