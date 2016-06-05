#include "ventanaconsultarcerveza.h"
#include "ui_ventanaconsultarcerveza.h"

VentanaConsultarCerveza::VentanaConsultarCerveza(Grafo *grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaConsultarCerveza)
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

    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(grafoPuntero->obtenerEstilos()[0]->getNombre()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(grafoPuntero->obtenerEstilos()[0]->getNombre())[i]->getNombre());
    }

}

VentanaConsultarCerveza::~VentanaConsultarCerveza()
{
    delete ui;
}

void VentanaConsultarCerveza::on_btnConsultar_clicked()
{
    NodoCerveza* nodo = grafoPuntero->obtenerNodo(ui->comboCervezas->currentText());

    ui->lneNombre->setText(nodo->getNombre());
    ui->txeDescripcion->setText(nodo->getDescripcion());
    ui->lneTipoDeFermentacion->setText(nodo->getTipoDeFermentacion());
    ui->lneTiempoDeFermentacion->setText(nodo->getTiempoDeFermentacion());
    ui->lneTemperatura->setText(nodo->getTemperatura());
    ui->lneColor->setText(nodo->getColor());
    ui->lneCuerpo->setText(nodo->getCuerpo());
    ui->lnePrecio->setText(nodo->getPrecio());

}

void VentanaConsultarCerveza::on_comboFamilias_currentIndexChanged(int index)
{
    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre())[i]->getNombre());
    }

    //FALTA AGREGARLE LOS VALORES AL COMBO DE CERVEZAS PARA ESTE ESTILO ACTUAL [0]

    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size();i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }
}

void VentanaConsultarCerveza::on_comboEstilos_currentIndexChanged(int index)
{
    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }
}
