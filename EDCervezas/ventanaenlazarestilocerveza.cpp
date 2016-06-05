#include "ventanaenlazarestilocerveza.h"
#include "ui_ventanaenlazarestilocerveza.h"
#include "grafo.h"

#include <QMessageBox>


VentanaEnlazarEstiloCerveza::VentanaEnlazarEstiloCerveza(Grafo * grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaEnlazarEstiloCerveza)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    for(int i = 0; i < grafo->obtenerEstilos().size(); i++){
       ui->comboEstilos->addItem(grafo->obtenerEstilos()[i]->getNombre());
    }

    for(int i = 0; i < grafo->obtenerCervezasNoVecinas(ui->comboEstilos->currentText()).size(); i++){
       ui->comboCervezas->addItem(grafo->obtenerCervezasNoVecinas(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }

}

VentanaEnlazarEstiloCerveza::~VentanaEnlazarEstiloCerveza()
{
    delete ui;
}

void VentanaEnlazarEstiloCerveza::on_btnEnlazar_clicked()
{
    grafoPuntero->establecerVecinos(ui->comboEstilos->currentText(),ui->comboCervezas->currentText());

    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasNoVecinas(ui->comboEstilos->currentText()).size(); i++){
       ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasNoVecinas(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }

    QMessageBox *mensaje = new QMessageBox(this);
    QString success = "Estilo: "+ui->comboEstilos->currentText()+ " <- enlazado con -> Cerveza: "+ui->comboCervezas->currentText();
    mensaje->setText(success);
    mensaje->exec();
}

void VentanaEnlazarEstiloCerveza::on_comboEstilos_currentIndexChanged(int index)
{
    ui->comboCervezas->clear();

    for(int i = 0; i < grafoPuntero->obtenerCervezasNoVecinas(ui->comboEstilos->currentText()).size(); i++){
       ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasNoVecinas(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText()== ""){
        ui->btnEnlazar->setEnabled(false);
    }
    else{
        ui->btnEnlazar->setEnabled(true);
    }
}
