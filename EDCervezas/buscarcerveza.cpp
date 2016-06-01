#include "buscarcerveza.h"
#include "ui_buscarcerveza.h"
#include "ventanaprincipal.h"

BuscarCerveza::BuscarCerveza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuscarCerveza)
{
    ui->setupUi(this);
}

BuscarCerveza::~BuscarCerveza()
{
    delete ui;
}

void BuscarCerveza::on_btnatras4_clicked()
{
    VentanaPrincipal * BuscarCerveza  = new VentanaPrincipal();
    BuscarCerveza->show();
    close();
}
