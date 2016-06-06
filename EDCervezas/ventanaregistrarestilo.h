#ifndef VENTANAREGISTRARESTILO_H
#define VENTANAREGISTRARESTILO_H

#include <QDialog>

#include "grafo.h"

namespace Ui {
class VentanaRegistrarEstilo;
}

class VentanaRegistrarEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaRegistrarEstilo(Grafo * grafo, QWidget *parent = 0);
    ~VentanaRegistrarEstilo();

    bool validarCampos();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::VentanaRegistrarEstilo *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAREGISTRARESTILO_H
