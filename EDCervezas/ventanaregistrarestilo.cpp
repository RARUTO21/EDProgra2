#include "ventanaregistrarestilo.h"
#include "ui_ventanaregistrarestilo.h"
#include <QDebug>
#include <QMessageBox>

VentanaRegistrarEstilo::VentanaRegistrarEstilo(Grafo * grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaRegistrarEstilo)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
        qDebug()<<"Entro en la iteracion: "<<i;
        qDebug()<<"Valor de la familia "<<i<<":"<<grafo->obtenerFamilias()[i]->getNombre();
        ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }
}


VentanaRegistrarEstilo::~VentanaRegistrarEstilo()
{
    delete ui;
}

void VentanaRegistrarEstilo::on_buttonBox_accepted()
{
    if(validarCampos()){
        QString Estilo = "Estilo";

        grafoPuntero->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Estilo,ui->lneCuerpo->text(),ui->lnePrecio->text());

        grafoPuntero->establecerVecinos(ui->comboFamilias->currentText(),ui->lneNombre->text());

        qDebug()<<"Estilo: "<<ui->lneNombre->text()<<" insertado! Enlazado con la familia: "<<ui->comboFamilias->currentText();

        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Estilo registrado exitosamente!";
        mensaje->setText(success);
        mensaje->exec();
    }
    else{
        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Estilo NO registrado!\nDebe ingresar datos en todos los campos vacíos";
        mensaje->setText(success);
        mensaje->exec();
    }

}

bool VentanaRegistrarEstilo::validarCampos(){
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
