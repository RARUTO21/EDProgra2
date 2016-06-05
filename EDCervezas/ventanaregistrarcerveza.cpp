#include "ventanaregistrarcerveza.h"
#include "ui_ventanaregistrarcerveza.h"

#include <QDebug>

VentanaRegistrarCerveza::VentanaRegistrarCerveza(Grafo* grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaRegistrarCerveza)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
        ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }

    /*for(int i = 0; i < grafo->obtenerEstilosDeFamilia(grafo->obtenerFamilias()[0]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafo->obtenerEstilosDeFamilia(grafo->obtenerFamilias()[0]->getNombre())[i]->getNombre());
        //grafo->obtenerEstilosDeFamilia(grafo->obtenerFamilias()[0]->getNombre())[i]->getNombre()
    }*/

    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[0]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[0]->getNombre())[i]->getNombre());
    }
}

VentanaRegistrarCerveza::~VentanaRegistrarCerveza()
{
    delete ui;
}

void VentanaRegistrarCerveza::on_comboFamilias_currentIndexChanged(int index)
{
    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(grafoPuntero->obtenerFamilias()[index]->getNombre())[i]->getNombre());
    }
}

void VentanaRegistrarCerveza::on_buttonBox_accepted()
{
    QString Cerveza = "Cerveza";

    grafoPuntero->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Cerveza,ui->lneCuerpo->text(),ui->lnePrecio->text());

    grafoPuntero->establecerVecinos(ui->comboEstilos->currentText(),ui->lneNombre->text());

    qDebug()<<"Cerveza: "<<ui->lneNombre->text()<<" insertada! Enlazada con el estilo: "<<ui->comboEstilos->currentText();
}
