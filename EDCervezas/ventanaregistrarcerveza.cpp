#include "ventanaregistrarcerveza.h"
#include "ui_ventanaregistrarcerveza.h"

#include <QDebug>
#include <QMessageBox>

VentanaRegistrarCerveza::VentanaRegistrarCerveza(Grafo* grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaRegistrarCerveza)
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

    if(ui->comboEstilos->currentText() == ""){
        ui->buttonBox->setEnabled(false);
    }
    else{
        ui->buttonBox->setEnabled(true);
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

    if(ui->comboEstilos->currentText() == ""){
        ui->buttonBox->setEnabled(false);
    }
    else{
        ui->buttonBox->setEnabled(true);
    }
}

void VentanaRegistrarCerveza::on_buttonBox_accepted()
{
    if(validarCampos()){
        QString Cerveza = "Cerveza";

        grafoPuntero->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Cerveza,ui->lneCuerpo->text(),ui->lnePrecio->text());

        grafoPuntero->establecerVecinos(ui->comboEstilos->currentText(),ui->lneNombre->text());

        qDebug()<<"Cerveza: "<<ui->lneNombre->text()<<" insertada! Enlazada con el estilo: "<<ui->comboEstilos->currentText();

        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Cerveza registrada exitosamente!";
        mensaje->setText(success);
        mensaje->exec();
    }
    else{
        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Cerveza NO registrada!\nDebe ingresar datos en todos los campos vacíos";
        mensaje->setText(success);
        mensaje->exec();
    }
}

bool VentanaRegistrarCerveza::validarCampos(){
    if(ui->lneNombre->text() == ""){
        return false;
    }

    if(ui->txeDescripcion->toPlainText() == ""){
        return false;
    }

    if(ui->lneTipoDeFermentacion->text() == ""){
        return false;
    }

    if(ui->lneTiempoDeFermentacion->text() == ""){
        return false;
    }

    if(ui->lneTemperatura->text() == ""){
        return false;
    }

    if(ui->lneColor->text() == ""){
        return false;
    }

    if(ui->lneCuerpo->text() == ""){
        return false;
    }
    if(ui->lnePrecio->text() == ""){
        return false;
    }
    return true;
}
