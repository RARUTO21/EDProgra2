#include "ventanaeliminarestilo.h"
#include "ui_ventanaeliminarestilo.h"

#include "grafo.h"
#include <QMessageBox>

VentanaEliminarEstilo::VentanaEliminarEstilo(Grafo * grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaEliminarEstilo)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    ui->comboFamilias->clear();

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
        ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }

    ui->comboEstilos->clear();
    for(int i = 0; i < grafo->obtenerEstilosDeFamilia(ui->comboFamilias->currentText()).size(); i++){
        ui->comboEstilos->addItem(grafo->obtenerEstilosDeFamilia(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText() == ""){
        ui->btnEliminar->setEnabled(false);
    }
    else{
        ui->btnEliminar->setEnabled(true);
    }
}

VentanaEliminarEstilo::~VentanaEliminarEstilo()
{
    delete ui;
}

void VentanaEliminarEstilo::on_comboFamilias_currentIndexChanged(int index)
{
    ui->comboEstilos->clear();
    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText() == ""){
        ui->btnEliminar->setEnabled(false);
    }
    else{
        ui->btnEliminar->setEnabled(true);
    }
}

void VentanaEliminarEstilo::on_btnEliminar_clicked()
{

    //FUNCION DEL GRAFO

    grafoPuntero->eliminarVecino(ui->comboFamilias->currentText(),ui->comboEstilos->currentText());

    QMessageBox *mensaje = new QMessageBox(this);
    QString success = "Familia: "+ui->comboFamilias->currentText()+ " <- desenlazada de -> Estilo: "+ui->comboEstilos->currentText();
    mensaje->setText(success);
    mensaje->exec();

    ui->comboEstilos->clear();
    for(int i = 0; i < grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText()).size(); i++){
        ui->comboEstilos->addItem(grafoPuntero->obtenerEstilosDeFamilia(ui->comboFamilias->currentText())[i]->getNombre());
    }

    if(ui->comboEstilos->currentText() == ""){
        ui->btnEliminar->setEnabled(false);
    }
    else{
        ui->btnEliminar->setEnabled(true);
    }
}
