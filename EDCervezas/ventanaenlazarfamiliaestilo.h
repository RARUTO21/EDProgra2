#ifndef VENTANAENLAZARFAMILIAESTILO_H
#define VENTANAENLAZARFAMILIAESTILO_H

#include <QDialog>
#include "grafo.h"

namespace Ui {
class VentanaEnlazarFamiliaEstilo;
}

class VentanaEnlazarFamiliaEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEnlazarFamiliaEstilo(Grafo *grafo, QWidget *parent = 0);
    ~VentanaEnlazarFamiliaEstilo();

private slots:
    void on_btnEnlazar_clicked();

    void on_comboFamilias_currentIndexChanged(int index);

private:
    Ui::VentanaEnlazarFamiliaEstilo *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAENLAZARFAMILIAESTILO_H
