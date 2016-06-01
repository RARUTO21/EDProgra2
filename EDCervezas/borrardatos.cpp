#include "borrardatos.h"
#include "ui_borrardatos.h"
#include "ventanaprincipal.h"

BorrarDatos::BorrarDatos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrarDatos)
{
    ui->setupUi(this);
}

BorrarDatos::~BorrarDatos()
{
    delete ui;
}

void BorrarDatos::on_btnatras6_clicked()
{
    VentanaPrincipal * BorrarDatos = new VentanaPrincipal();
    BorrarDatos->show();
    close();

}
