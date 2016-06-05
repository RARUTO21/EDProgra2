#ifndef VENTANACONSULTARCERVEZA_H
#define VENTANACONSULTARCERVEZA_H

#include <QDialog>
#include "grafo.h"
#include "nodocerveza.h"

namespace Ui {
class VentanaConsultarCerveza;
}

class VentanaConsultarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaConsultarCerveza(Grafo * grafo, QWidget *parent = 0);
    ~VentanaConsultarCerveza();

private slots:
    void on_btnConsultar_clicked();

    void on_comboFamilias_currentIndexChanged(int index);

    void on_comboEstilos_currentIndexChanged(int index);

private:
    Ui::VentanaConsultarCerveza *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANACONSULTARCERVEZA_H
