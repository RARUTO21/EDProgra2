#ifndef VENTANAREGISTRARCERVEZA_H
#define VENTANAREGISTRARCERVEZA_H

#include <QDialog>
#include "grafo.h"

namespace Ui {
class VentanaRegistrarCerveza;
}

class VentanaRegistrarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaRegistrarCerveza(Grafo *grafo, QWidget *parent = 0);
    ~VentanaRegistrarCerveza();

    bool validarCampos();

private slots:

    void on_comboFamilias_currentIndexChanged(int index);

    void on_buttonBox_accepted();

private:
    Ui::VentanaRegistrarCerveza *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAREGISTRARCERVEZA_H
