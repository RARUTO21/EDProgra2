#include "registrarcerveza.h"
#include "ui_registrarcerveza.h"
#include "ventanaprincipal.h"

RegistrarCerveza::RegistrarCerveza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrarCerveza)
{
    ui->setupUi(this);
}

RegistrarCerveza::~RegistrarCerveza()
{
    delete ui;
}

void RegistrarCerveza::on_btnatras_clicked()
{
    VentanaPrincipal * RegistrarCerveza = new VentanaPrincipal();
    RegistrarCerveza->show();
    close();
}
