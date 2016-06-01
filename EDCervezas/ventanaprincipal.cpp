#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "registrarcerveza.h"
#include "registrarfamiliacerveza.h"
#include "registrarestilocerveza.h"
#include "buscarcerveza.h"
#include "listacervezasfamilia.h"
#include "borrardatos.h"

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::on_btnRegCerveza_clicked()
{
    RegistrarCerveza * VentanaPrincipal = new RegistrarCerveza();
    VentanaPrincipal->show();
    close();
}

void VentanaPrincipal::on_btnsalir_clicked()
{
    close();
}

void VentanaPrincipal::on_btnRegFamilia_clicked()
{
    RegistrarFamiliaCerveza * VentanaPrincipal = new RegistrarFamiliaCerveza();
    VentanaPrincipal->show();
    close();
}

void VentanaPrincipal::on_btnRegEstilo_clicked()
{
   RegistrarEstiloCerveza * VentanaPrincipal = new RegistrarEstiloCerveza();
   VentanaPrincipal->show();
   close();
}

void VentanaPrincipal::on_btnBuscarCerveza_clicked()
{
    BuscarCerveza * VentanaPrincipal = new BuscarCerveza();
    VentanaPrincipal->show();
    close();
}

void VentanaPrincipal::on_btnListaCervezas_clicked()
{
    ListaCervezasFamilia * VentanaPrincipal = new ListaCervezasFamilia();
    VentanaPrincipal->show();
    close();
}

void VentanaPrincipal::on_btnBorrarDatos_clicked()
{
    BorrarDatos * VentanaPrincipal = new BorrarDatos();
    VentanaPrincipal->show();
    close();
}
