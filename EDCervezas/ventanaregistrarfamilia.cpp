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
    QString Familia = "Familia";
    //punteroGrafo->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Familia,ui->lneCuerpo,ui->lnePrecio->text());
    punteroGrafo->insertarNodo(ui->lneNombre->text(),ui->txeDescripcion->toPlainText(),ui->lneTipoDeFermentacion->text(),ui->lneTiempoDeFermentacion->text(),ui->lneTemperatura->text(),ui->lneColor->text(),Familia,ui->lneCuerpo->text(),ui->lnePrecio->text());


    QMessageBox *mensaje = new QMessageBox(this);
    QString success = "Familia insertada exitosamente!";
    mensaje->setText(success);
    mensaje->exec();

    qDebug()<<punteroGrafo->obtenerFamilias();
}
