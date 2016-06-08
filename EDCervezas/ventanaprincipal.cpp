#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "registrarfamiliacerveza.h"
#include "registrarestilocerveza.h"

#include "ventanaregistrarfamilia.h"
#include "ventanaregistrarestilo.h"
#include "ventanaregistrarcerveza.h"

#include "ventanaeliminarcerveza.h"
#include "ventanaeliminarestilo.h"

#include "ventanaconsultarcerveza.h"
#include "ventanaconsultarestilo.h"
#include "ventanaconsultarfamilia.h"

#include "ventanaenlazarestilocerveza.h"
#include "ventanaenlazarfamiliaestilo.h"

#include <QDebug>
#include <QMessageBox>

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

void VentanaPrincipal::on_btnsalir_clicked()
{
    close();
}

void VentanaPrincipal::on_btnBuscarCerveza_clicked()
{
    VentanaConsultarCerveza * ventana = new VentanaConsultarCerveza(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnRegistrarEstilo_clicked()
{
    VentanaRegistrarEstilo * ventana = new VentanaRegistrarEstilo(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnRegistrarFamilia_clicked()
{
    VentanaRegistrarFamilia * ventana = new VentanaRegistrarFamilia(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnRegistrarCerveza_clicked()
{
    VentanaRegistrarCerveza * ventana = new VentanaRegistrarCerveza(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnConsultarEstilo_clicked()
{
    VentanaConsultarEstilo * ventana = new VentanaConsultarEstilo(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnConsultarFamilia_clicked()
{
    VentanaConsultarFamilia * ventana = new VentanaConsultarFamilia(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnEnlazarFamiliaEstilo_clicked()
{
    VentanaEnlazarFamiliaEstilo * ventana = new VentanaEnlazarFamiliaEstilo(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnEnlazarEstiloCerveza_clicked()
{
    VentanaEnlazarEstiloCerveza * ventana = new VentanaEnlazarEstiloCerveza(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnEliminarEstilo_clicked()
{
    VentanaEliminarEstilo * ventana = new VentanaEliminarEstilo(&grafo);
    ventana->exec();
}

void VentanaPrincipal::on_btnEliminarCerveza_clicked()
{
    VentanaEliminarCerveza * ventana = new VentanaEliminarCerveza(&grafo);
    ventana->exec();
}
