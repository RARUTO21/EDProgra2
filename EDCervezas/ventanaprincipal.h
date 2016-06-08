#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>

#include "grafo.h"


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
    void on_btnsalir_clicked();

    void on_btnBuscarCerveza_clicked();

    void on_btnRegistrarEstilo_clicked();

    void on_btnRegistrarFamilia_clicked();

    void on_btnRegistrarCerveza_clicked();

    void on_btnConsultarEstilo_clicked();

    void on_btnConsultarFamilia_clicked();

    void on_btnEnlazarFamiliaEstilo_clicked();

    void on_btnEnlazarEstiloCerveza_clicked();

    void on_btnEliminarEstilo_clicked();

    void on_btnEliminarCerveza_clicked();

private:
    Ui::VentanaPrincipal *ui;
    Grafo grafo; //Instancia de la clase controladora: Enlaza la parte lógica con la parte gráfica
};

#endif // VENTANAPRINCIPAL_H
