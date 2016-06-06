#include "ventanaregistrarfamilia.h"
#include "ui_ventanaregistrarfamilia.h"
#include <QDebug>

#include <QMessageBox>


VentanaRegistrarFamilia::VentanaRegistrarFamilia(Grafo * grafo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaRegistrarFamilia)
{
    ui->setupUi(this);
    punteroGrafo = grafo;
}

VentanaRegistrarFamilia::~VentanaRegistrarFamilia()
{
    delete ui;
}

void VentanaRegistrarFamilia::on_buttonBox_accepted()
{
    if(validarCampos()){

        QString Familia = "Familia";
        //punteroGrafo->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Familia,ui->lneCuerpo,ui->lnePrecio->text());
        punteroGrafo->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Familia,ui->lneCuerpo->text(),ui->lnePrecio->text());

        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Familia registrada exitosamente!";
        mensaje->setText(success);
        mensaje->exec();

        qDebug()<<punteroGrafo->obtenerFamilias();
    }
    else{
        QMessageBox *mensaje = new QMessageBox(this);
        QString success = "Familia NO registrada!\nDebe ingresar datos en todos los campos vacíos";
        mensaje->setText(success);
        mensaje->exec();
    }
}

bool VentanaRegistrarFamilia::validarCampos(){
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
