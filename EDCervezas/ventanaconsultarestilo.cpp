#include "ventanaconsultarestilo.h"
#include "ui_ventanaconsultarestilo.h"

VentanaConsultarEstilo::VentanaConsultarEstilo(Grafo *grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaConsultarEstilo)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
        ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }

    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[0]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[0]->getNombre())[i]->getNombre());
    }

}

VentanaConsultarEstilo::~VentanaConsultarEstilo()
{
    delete ui;
}

void VentanaConsultarEstilo::on_comboFamilias_currentIndexChanged(int index)
{
    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre())[i]->getNombre());
    }
}

void VentanaConsultarEstilo::on_btnConsultar_clicked()
{
    NodoCerveza* nodo = grafoPuntero->obtenerNodo(ui->comboEstilos->currentText());

    ui->lneNombre->setText(nodo->getNombre());
    ui->txeDescripcion->setText(nodo->getDescripcion());
    ui->lneTipoDeFermentacion->setText(nodo->getTipoDeFermentacion());
    ui->lneTiempoDeFermentacion->setText(nodo->getTiempoDeFermentacion());
    ui->lneTemperatura->setText(nodo->getTemperatura());
    ui->lneColor->setText(nodo->getColor());
    ui->lneCuerpo->setText(nodo->getCuerpo());
    ui->lnePrecio->setText(nodo->getPrecio());
}
