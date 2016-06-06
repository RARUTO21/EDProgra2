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

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText())[i]->getNombre());
    }


    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText() == ""){
        ui->btnConsultar->setEnabled(false);
        ui->comboCervezas->clear();
    }
    else{
        ui->btnConsultar->setEnabled(true);
    }

    if(ui->comboCervezas->currentText() == ""){
        ui->btnConsultar->setEnabled(false);
    }
    else{
        ui->btnConsultar->setEnabled(true);
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

    if(ui->comboEstilos->currentText() == ""){
        ui->btnConsultar->setEnabled(false);
        ui->comboCervezas->clear();
    }
    else{
        ui->btnConsultar->setEnabled(true);
    }

    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size();i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }
    if(ui->comboCervezas->currentText() == ""){
        ui->btnConsultar->setEnabled(false);
    }
    else{
        ui->btnConsultar->setEnabled(true);
    }
}

void VentanaConsultarCerveza::on_comboEstilos_currentIndexChanged(int index)
{
    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText() == ""){
        ui->btnConsultar->setEnabled(false);
    }
    else{
        ui->btnConsultar->setEnabled(true);
    }
}
