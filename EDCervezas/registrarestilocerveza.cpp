#include "registrarestilocerveza.h"
#include "ui_registrarestilocerveza.h"
#include "ventanaprincipal.h"

RegistrarEstiloCerveza::RegistrarEstiloCerveza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrarEstiloCerveza)
{
    ui->setupUi(this);
}

RegistrarEstiloCerveza::~RegistrarEstiloCerveza()
{
    delete ui;
}

void RegistrarEstiloCerveza::on_btnatras3_clicked()
{
    VentanaPrincipal * RegistrarEstiloCerveza = new VentanaPrincipal();
    RegistrarEstiloCerveza->show();
    close();
}
