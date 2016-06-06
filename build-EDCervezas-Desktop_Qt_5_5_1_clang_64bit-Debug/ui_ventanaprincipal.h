/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *centralWidget;
    QPushButton *btnsalir;
    QGroupBox *grbEnlazar;
    QPushButton *btnEnlazarFamiliaEstilo;
    QPushButton *btnEnlazarEstiloCerveza;
    QGroupBox *grbRegistrar;
    QPushButton *btnRegistrarFamilia;
    QPushButton *btnRegistrarEstilo;
    QPushButton *btnRegistrarCerveza;
    QGroupBox *grbConsultar;
    QPushButton *btnConsultarFamilia;
    QPushButton *btnConsultarEstilo;
    QPushButton *btnBuscarCerveza;
    QGroupBox *grbEliminar;
    QPushButton *btnEliminarEstilo;
    QPushButton *btnEliminarCerveza;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(403, 445);
        VentanaPrincipal->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnsalir = new QPushButton(centralWidget);
        btnsalir->setObjectName(QStringLiteral("btnsalir"));
        btnsalir->setGeometry(QRect(300, 370, 91, 41));
        grbEnlazar = new QGroupBox(centralWidget);
        grbEnlazar->setObjectName(QStringLiteral("grbEnlazar"));
        grbEnlazar->setGeometry(QRect(20, 220, 161, 131));
        btnEnlazarFamiliaEstilo = new QPushButton(grbEnlazar);
        btnEnlazarFamiliaEstilo->setObjectName(QStringLiteral("btnEnlazarFamiliaEstilo"));
        btnEnlazarFamiliaEstilo->setGeometry(QRect(10, 30, 141, 41));
        btnEnlazarEstiloCerveza = new QPushButton(grbEnlazar);
        btnEnlazarEstiloCerveza->setObjectName(QStringLiteral("btnEnlazarEstiloCerveza"));
        btnEnlazarEstiloCerveza->setGeometry(QRect(10, 80, 141, 41));
        grbRegistrar = new QGroupBox(centralWidget);
        grbRegistrar->setObjectName(QStringLiteral("grbRegistrar"));
        grbRegistrar->setGeometry(QRect(20, 20, 161, 181));
        btnRegistrarFamilia = new QPushButton(grbRegistrar);
        btnRegistrarFamilia->setObjectName(QStringLiteral("btnRegistrarFamilia"));
        btnRegistrarFamilia->setGeometry(QRect(10, 30, 141, 41));
        btnRegistrarFamilia->setStyleSheet(QStringLiteral(""));
        btnRegistrarEstilo = new QPushButton(grbRegistrar);
        btnRegistrarEstilo->setObjectName(QStringLiteral("btnRegistrarEstilo"));
        btnRegistrarEstilo->setEnabled(true);
        btnRegistrarEstilo->setGeometry(QRect(10, 80, 141, 41));
        btnRegistrarCerveza = new QPushButton(grbRegistrar);
        btnRegistrarCerveza->setObjectName(QStringLiteral("btnRegistrarCerveza"));
        btnRegistrarCerveza->setEnabled(true);
        btnRegistrarCerveza->setGeometry(QRect(10, 130, 141, 41));
        grbConsultar = new QGroupBox(centralWidget);
        grbConsultar->setObjectName(QStringLiteral("grbConsultar"));
        grbConsultar->setGeometry(QRect(230, 20, 161, 181));
        btnConsultarFamilia = new QPushButton(grbConsultar);
        btnConsultarFamilia->setObjectName(QStringLiteral("btnConsultarFamilia"));
        btnConsultarFamilia->setGeometry(QRect(10, 30, 141, 41));
        btnConsultarEstilo = new QPushButton(grbConsultar);
        btnConsultarEstilo->setObjectName(QStringLiteral("btnConsultarEstilo"));
        btnConsultarEstilo->setGeometry(QRect(10, 80, 141, 41));
        btnBuscarCerveza = new QPushButton(grbConsultar);
        btnBuscarCerveza->setObjectName(QStringLiteral("btnBuscarCerveza"));
        btnBuscarCerveza->setGeometry(QRect(10, 130, 141, 41));
        btnBuscarCerveza->setStyleSheet(QStringLiteral(""));
        grbEliminar = new QGroupBox(centralWidget);
        grbEliminar->setObjectName(QStringLiteral("grbEliminar"));
        grbEliminar->setGeometry(QRect(230, 220, 161, 131));
        btnEliminarEstilo = new QPushButton(grbEliminar);
        btnEliminarEstilo->setObjectName(QStringLiteral("btnEliminarEstilo"));
        btnEliminarEstilo->setGeometry(QRect(10, 30, 141, 41));
        btnEliminarCerveza = new QPushButton(grbEliminar);
        btnEliminarCerveza->setObjectName(QStringLiteral("btnEliminarCerveza"));
        btnEliminarCerveza->setGeometry(QRect(10, 80, 141, 41));
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 22));
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "Sistema de Cervezas", 0));
        btnsalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0));
        grbEnlazar->setTitle(QApplication::translate("VentanaPrincipal", "Enlazar", 0));
        btnEnlazarFamiliaEstilo->setText(QApplication::translate("VentanaPrincipal", "Familia - Estilo", 0));
        btnEnlazarEstiloCerveza->setText(QApplication::translate("VentanaPrincipal", "Estilo - Cerveza", 0));
        grbRegistrar->setTitle(QApplication::translate("VentanaPrincipal", "Registrar", 0));
        btnRegistrarFamilia->setText(QApplication::translate("VentanaPrincipal", "Familia", 0));
        btnRegistrarEstilo->setText(QApplication::translate("VentanaPrincipal", "Estilo", 0));
        btnRegistrarCerveza->setText(QApplication::translate("VentanaPrincipal", "Cerveza", 0));
        grbConsultar->setTitle(QApplication::translate("VentanaPrincipal", "Consultar", 0));
        btnConsultarFamilia->setText(QApplication::translate("VentanaPrincipal", "Familia", 0));
        btnConsultarEstilo->setText(QApplication::translate("VentanaPrincipal", "Estilo", 0));
        btnBuscarCerveza->setText(QApplication::translate("VentanaPrincipal", "Cerveza", 0));
        grbEliminar->setTitle(QApplication::translate("VentanaPrincipal", "Desenlazar", 0));
        btnEliminarEstilo->setText(QApplication::translate("VentanaPrincipal", "Familia - Estilo", 0));
        btnEliminarCerveza->setText(QApplication::translate("VentanaPrincipal", "Estilo - Cerveza", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
