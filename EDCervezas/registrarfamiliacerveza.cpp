#include "registrarfamiliacerveza.h"
#include "ui_registrarfamiliacerveza.h"
#include "ventanaprincipal.h"

RegistrarFamiliaCerveza::RegistrarFamiliaCerveza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrarFamiliaCerveza)
{
    ui->setupUi(this);
}

RegistrarFamiliaCerveza::~RegistrarFamiliaCerveza()
{
    delete ui;
}

void RegistrarFamiliaCerveza::on_btnatras2_clicked()
{
    VentanaPrincipal * RegistrarFamiliaCerveza = new VentanaPrincipal();
    RegistrarFamiliaCerveza->show();
    close();
}
