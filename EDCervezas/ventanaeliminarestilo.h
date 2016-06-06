#ifndef VENTANAELIMINARESTILO_H
#define VENTANAELIMINARESTILO_H

#include <QDialog>

#include "grafo.h"

namespace Ui {
class VentanaEliminarEstilo;
}

class VentanaEliminarEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEliminarEstilo(Grafo *grafo, QWidget *parent = 0);
    ~VentanaEliminarEstilo();

private slots:
    void on_comboFamilias_currentIndexChanged(int index);

    void on_btnEliminar_clicked();

private:
    Ui::VentanaEliminarEstilo *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAELIMINARESTILO_H
