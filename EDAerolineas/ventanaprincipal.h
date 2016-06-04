#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QTableWidgetItem>

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();

private slots:
    void on_btnPrepararTabla_clicked();

    void on_btnInsertarRegistro_clicked();

    void on_btnBorrarSeleccion_clicked();

    void on_MatrizAdyacencia_itemClicked(QTableWidgetItem *item);

    void on_btnBorrarTodo_clicked();

private:
    Ui::VentanaPrincipal *ui;
    int u;
    int f;
};

#endif // VENTANAPRINCIPAL_H
