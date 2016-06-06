#include "ventanaconsultarfamilia.h"
#include "ui_ventanaconsultarfamilia.h"

VentanaConsultarFamilia::VentanaConsultarFamilia(Grafo * grafo,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VentanaConsultarFamilia)
{
    ui->setupUi(this);
    grafoPuntero = grafo;

    ui->comboFamilias->clear();

    for(int i = 0; i < grafo->obtenerFamilias().size(); i++){
        ui->comboFamilias->addItem(grafo->obtenerFamilias()[i]->getNombre());
    }

}

VentanaConsultarFamilia::~VentanaConsultarFamilia()
{
    delete ui;
}

void VentanaConsultarFamilia::on_btnConsultar_clicked()
{
    NodoCerveza* nodo = grafoPuntero->obtenerNodo(ui->comboFamilias->currentText());

    ui->lneNombre->setText(nodo->getNombre());
    ui->txeDescripcion->setText(nodo->getDescripcion());
    ui->lneTipoDeFermentacion->setText(nodo->getTipoDeFermentacion());
    ui->lneTiempoDeFermentacion->setText(nodo->getTiempoDeFermentacion());
    ui->lneTemperatura->setText(nodo->getTemperatura());
    ui->lneColor->setText(nodo->getColor());
    ui->lneCuerpo->setText(nodo->getCuerpo());
    ui->lnePrecio->setText(nodo->getPrecio());
}
