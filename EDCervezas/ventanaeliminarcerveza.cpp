#include "ventanaeliminarcerveza.h"
#include "ui_ventanaeliminarcerveza.h"

#include "grafo.h"
#include <QMessageBox>

VentanaEliminarCerveza::VentanaEliminarCerveza(Grafo * grafo,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaEliminarCerveza)
{
    ui->setupUi(this);
    grafoPuntero = grafo;


    ui->comboEstilos->clear();
    for(int i = 0; i < grafo->obtenerEstilos().size(); i++){
        ui->comboEstilos->addItem(grafo->obtenerEstilos()[i]->getNombre());
    }

    ui->comboCervezas->clear();
    for(int i = 0; i < grafo->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafo->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }
}

VentanaEliminarCerveza::~VentanaEliminarCerveza()
{
    delete ui;
}

void VentanaEliminarCerveza::on_btnEliminar_clicked()
{

    //FUNCION DEL GRAFO

    grafoPuntero->eliminarVecino(ui->comboEstilos->currentText(),ui->comboCervezas->currentText());

    QMessageBox *mensaje = new QMessageBox(this);
    QString success = "Estilo: "+ui->comboEstilos->currentText()+ " <- desenlazado de -> Cerveza: "+ui->comboCervezas->currentText();
    mensaje->setText(success);
    mensaje->exec();

    ui->comboCervezas->clear();
    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText() == ""){
        ui->btnEliminar->setEnabled(false);
    }
    else{
        ui->btnEliminar->setEnabled(true);
    }
}



void VentanaEliminarCerveza::on_comboEstilos_currentIndexChanged(int index)
{
    ui->comboCervezas->clear();
    for(int i = 0; i < grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText()).size(); i++){
        ui->comboCervezas->addItem(grafoPuntero->obtenerCervezasDeEstilo(ui->comboEstilos->currentText())[i]->getNombre());
    }

    if(ui->comboCervezas->currentText() == ""){
        ui->btnEliminar->setEnabled(false);
    }
    else{
        ui->btnEliminar->setEnabled(true);
    }
}


