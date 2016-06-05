#include "ventanaenlazarfamiliaestilo.h"
#include "ui_ventanaenlazarfamiliaestilo.h"
#include "grafo.h"

#include <QMessageBox>

VentanaEnlazarFamiliaEstilo::VentanaEnlazarFamiliaEstilo(Grafo * grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaEnlazarFamiliaEstilo)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
       ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }

    ui->comboEstilos->clear();
    for(int i = 0; i < grafo->obtenerEstilosNoVecinos(ui->comboFamilias->currentText()).size(); i++){
       ui->comboEstilos->addItem(grafo->obtenerEstilosNoVecinos(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }


}

VentanaEnlazarFamiliaEstilo::~VentanaEnlazarFamiliaEstilo()
{
    delete ui;
}

void VentanaEnlazarFamiliaEstilo::on_btnEnlazar_clicked()
{
    grafoPuntero->establecerVecinos(ui->comboFamilias->currentText(),ui->comboEstilos->currentText());

    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosNoVecinos(ui->comboFamilias->currentText()).size(); i++){
       ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosNoVecinos(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }



    QMessageBox *mensaje = new QMessageBox(this);
    QString success = "Familia: "+ui->comboFamilias->currentText()+ " <- enlazado con -> Estilo: "+ui->comboEstilos->currentText();
    mensaje->setText(success);
    mensaje->exec();

}

void VentanaEnlazarFamiliaEstilo::on_comboFamilias_currentIndexChanged(int index)
{
    ui->comboEstilos->clear();

    for(int i = 0; i < grafoPuntero->obtenerEstilosNoVecinos(ui->comboFamilias->currentText()).size(); i++){
       ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosNoVecinos(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }
}
