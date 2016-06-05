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
    QPushButton *btnRegistrarFamilia;
    QPushButton *btnsalir;
    QPushButton *btnBuscarCerveza;
    QPushButton *btnListaCervezas;
    QPushButton *btnBorrarDatos;
    QPushButton *btnRegistrarEstilo;
    QPushButton *btnRegistrarCerveza;
    QPushButton *btnConsultarEstilo;
    QPushButton *btnConsultarFamilia;
    QGroupBox *groupBox;
    QPushButton *btnEnlazarFamiliaEstilo;
    QPushButton *btnEnlazarEstiloCerveza;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(756, 359);
        VentanaPrincipal->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127);"));
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnRegistrarFamilia = new QPushButton(centralWidget);
        btnRegistrarFamilia->setObjectName(QStringLiteral("btnRegistrarFamilia"));
        btnRegistrarFamilia->setGeometry(QRect(10, 50, 141, 41));
        btnRegistrarFamilia->setStyleSheet(QStringLiteral(""));
        btnsalir = new QPushButton(centralWidget);
        btnsalir->setObjectName(QStringLiteral("btnsalir"));
        btnsalir->setGeometry(QRect(560, 260, 75, 23));
        btnBuscarCerveza = new QPushButton(centralWidget);
        btnBuscarCerveza->setObjectName(QStringLiteral("btnBuscarCerveza"));
        btnBuscarCerveza->setGeometry(QRect(220, 210, 141, 41));
        btnBuscarCerveza->setStyleSheet(QStringLiteral(""));
        btnListaCervezas = new QPushButton(centralWidget);
        btnListaCervezas->setObjectName(QStringLiteral("btnListaCervezas"));
        btnListaCervezas->setGeometry(QRect(600, 40, 141, 41));
        btnListaCervezas->setStyleSheet(QStringLiteral(""));
        btnBorrarDatos = new QPushButton(centralWidget);
        btnBorrarDatos->setObjectName(QStringLiteral("btnBorrarDatos"));
        btnBorrarDatos->setGeometry(QRect(590, 130, 141, 41));
        btnRegistrarEstilo = new QPushButton(centralWidget);
        btnRegistrarEstilo->setObjectName(QStringLiteral("btnRegistrarEstilo"));
        btnRegistrarEstilo->setEnabled(false);
        btnRegistrarEstilo->setGeometry(QRect(10, 130, 141, 41));
        btnRegistrarCerveza = new QPushButton(centralWidget);
        btnRegistrarCerveza->setObjectName(QStringLiteral("btnRegistrarCerveza"));
        btnRegistrarCerveza->setEnabled(false);
        btnRegistrarCerveza->setGeometry(QRect(10, 210, 141, 41));
        btnConsultarEstilo = new QPushButton(centralWidget);
        btnConsultarEstilo->setObjectName(QStringLiteral("btnConsultarEstilo"));
        btnConsultarEstilo->setGeometry(QRect(220, 130, 141, 41));
        btnConsultarFamilia = new QPushButton(centralWidget);
        btnConsultarFamilia->setObjectName(QStringLiteral("btnConsultarFamilia"));
        btnConsultarFamilia->setGeometry(QRect(220, 50, 141, 41));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(390, 40, 171, 141));
        btnEnlazarFamiliaEstilo = new QPushButton(groupBox);
        btnEnlazarFamiliaEstilo->setObjectName(QStringLiteral("btnEnlazarFamiliaEstilo"));
        btnEnlazarFamiliaEstilo->setGeometry(QRect(20, 30, 141, 41));
        btnEnlazarEstiloCerveza = new QPushButton(groupBox);
        btnEnlazarEstiloCerveza->setObjectName(QStringLiteral("btnEnlazarEstiloCerveza"));
        btnEnlazarEstiloCerveza->setGeometry(QRect(20, 90, 141, 41));
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 756, 22));
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
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0));
        btnRegistrarFamilia->setText(QApplication::translate("VentanaPrincipal", "Registrar Familia", 0));
        btnsalir->setText(QApplication::translate("VentanaPrincipal", "Salir", 0));
        btnBuscarCerveza->setText(QApplication::translate("VentanaPrincipal", "Consultar Cerveza", 0));
        btnListaCervezas->setText(QApplication::translate("VentanaPrincipal", "Lista cervezas por familia", 0));
        btnBorrarDatos->setText(QApplication::translate("VentanaPrincipal", "Borrar datos", 0));
        btnRegistrarEstilo->setText(QApplication::translate("VentanaPrincipal", "Registrar Estilo", 0));
        btnRegistrarCerveza->setText(QApplication::translate("VentanaPrincipal", "Registrar Cerveza", 0));
        btnConsultarEstilo->setText(QApplication::translate("VentanaPrincipal", "Consultar Estilo", 0));
        btnConsultarFamilia->setText(QApplication::translate("VentanaPrincipal", "Consultar Familia", 0));
        groupBox->setTitle(QApplication::translate("VentanaPrincipal", "Enlazar", 0));
        btnEnlazarFamiliaEstilo->setText(QApplication::translate("VentanaPrincipal", "Familia - Estilo", 0));
        btnEnlazarEstiloCerveza->setText(QApplication::translate("VentanaPrincipal", "Estilo - Cerveza", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
