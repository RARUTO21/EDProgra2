#include "ventanaregistrarestilo.h"
#include "ui_ventanaregistrarestilo.h"
#include <QDebug>

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
    QString Estilo = "Estilo";

    grafoPuntero->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Estilo,ui->lneCuerpo->text(),ui->lnePrecio->text());

    grafoPuntero->establecerVecinos(ui->comboFamilias->currentText(),ui->lneNombre->text());

    qDebug()<<"Estilo: "<<ui->lneNombre->text()<<" insertado! Enlazado con la familia: "<<ui->comboFamilias->currentText();

}
