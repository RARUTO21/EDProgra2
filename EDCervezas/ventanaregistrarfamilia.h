#ifndef VENTANAREGISTRARFAMILIA_H
#define VENTANAREGISTRARFAMILIA_H

#include <QDialog>

#include "grafo.h"

namespace Ui {
class VentanaRegistrarFamilia;
}

class VentanaRegistrarFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaRegistrarFamilia(Grafo * grafo,QWidget *parent = 0);
    ~VentanaRegistrarFamilia();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::VentanaRegistrarFamilia *ui;
    Grafo *punteroGrafo;
};

#endif // VENTANAREGISTRARFAMILIA_H
