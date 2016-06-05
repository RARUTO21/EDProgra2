#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>

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
    void on_btnRegCerveza_clicked();

    void on_btnsalir_clicked();

    //void on_btnRegFamilia_clicked();

    //void on_btnRegEstilo_clicked();

    void on_btnBuscarCerveza_clicked();

    void on_btnListaCervezas_clicked();

    void on_btnBorrarDatos_clicked();

private:
    Ui::VentanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
