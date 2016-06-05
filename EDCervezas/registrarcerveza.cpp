#include "registrarcerveza.h"
#include "ui_registrarcerveza.h"
#include "ventanaprincipal.h"

RegistrarCerveza::RegistrarCerveza(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrarCerveza)
{
    ui->setupUi(this);

    /*
    ui->comboBoxFamilia->addItem("ALE");
    ui->comboBoxFamilia->addItem("Lager");
    ui->comboBoxFamilia->addItem("Lambic");


    ui->comboBoxEstilo->addItem("Británico");
    ui->comboBoxEstilo->addItem("Belga");
    ui->comboBoxEstilo->addItem("Alemán");
    ui->comboBoxEstilo->addItem("Americana");
    ui->comboBoxEstilo->addItem("Brown");
    ui->comboBoxEstilo->addItem("Porter/Stout");
    ui->comboBoxEstilo->addItem("Otros");
    */

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
