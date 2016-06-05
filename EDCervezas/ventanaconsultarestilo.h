#ifndef VENTANACONSULTARESTILO_H
#define VENTANACONSULTARESTILO_H

#include <QDialog>
#include "grafo.h"
#include "nodocerveza.h"

namespace Ui {
class VentanaConsultarEstilo;
}

class VentanaConsultarEstilo : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaConsultarEstilo(Grafo * grafo, QWidget *parent = 0);
    ~VentanaConsultarEstilo();

private slots:
    void on_comboFamilias_currentIndexChanged(int index);

    void on_btnConsultar_clicked();

private:
    Ui::VentanaConsultarEstilo *ui;
    Grafo * grafoPuntero;
};

#endif // VENTANACONSULTARESTILO_H
