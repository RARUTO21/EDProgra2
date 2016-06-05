#ifndef VENTANAENLAZARESTILOCERVEZA_H
#define VENTANAENLAZARESTILOCERVEZA_H

#include <QDialog>
#include "grafo.h"

namespace Ui {
class VentanaEnlazarEstiloCerveza;
}

class VentanaEnlazarEstiloCerveza : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEnlazarEstiloCerveza(Grafo * grafo, QWidget *parent = 0);
    ~VentanaEnlazarEstiloCerveza();

private slots:
    void on_btnEnlazar_clicked();

    void on_comboEstilos_currentIndexChanged(int index);

private:
    Ui::VentanaEnlazarEstiloCerveza *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANAENLAZARESTILOCERVEZA_H
