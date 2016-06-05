#ifndef VENTANACONSULTARFAMILIA_H
#define VENTANACONSULTARFAMILIA_H

#include <QDialog>
#include "grafo.h"
#include "nodocerveza.h"

namespace Ui {
class VentanaConsultarFamilia;
}

class VentanaConsultarFamilia : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaConsultarFamilia(Grafo * grafo,QWidget *parent = 0);
    ~VentanaConsultarFamilia();

private slots:
    void on_btnConsultar_clicked();

private:
    Ui::VentanaConsultarFamilia *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANACONSULTARFAMILIA_H
