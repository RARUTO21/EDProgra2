#ifndef VENTANAELIMINARCERVEZA_H
#define VENTANAELIMINARCERVEZA_H

#include <QDialog>
#include "grafo.h"

namespace Ui {
class VentanaEliminarCerveza;
}

class VentanaEliminarCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEliminarCerveza(Grafo * grafo,QWidget *parent = 0);
    ~VentanaEliminarCerveza();

private slots:
    void on_btnEliminar_clicked();

    void on_comboEstilos_currentIndexChanged(int index);

private:
    Ui::VentanaEliminarCerveza *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAELIMINARCERVEZA_H
