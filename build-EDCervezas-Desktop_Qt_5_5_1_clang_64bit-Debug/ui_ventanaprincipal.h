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
    QWidget *centralWidget1;
    QPushButton *btnRegCerveza;
    QPushButton *btnsalir;
    QPushButton *btnRegFamilia;
    QPushButton *btnRegEstilo;
    QPushButton *btnBuscarCerveza;
    QPushButton *btnListaCervezas;
    QPushButton *btnBorrarDatos;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QStringLiteral("VentanaPrincipal"));
        VentanaPrincipal->resize(523, 372);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VentanaPrincipal->setCentralWidget(centralWidget);
        centralWidget1 = new QWidget(VentanaPrincipal);
        centralWidget1->setObjectName(QStringLiteral("centralWidget1"));
        btnRegCerveza = new QPushButton(centralWidget1);
        btnRegCerveza->setObjectName(QStringLiteral("btnRegCerveza"));
        btnRegCerveza->setGeometry(QRect(40, 70, 141, 41));
        btnsalir = new QPushButton(centralWidget1);
        btnsalir->setObjectName(QStringLiteral("btnsalir"));
        btnsalir->setGeometry(QRect(380, 280, 75, 23));
        btnRegFamilia = new QPushButton(centralWidget1);
        btnRegFamilia->setObjectName(QStringLiteral("btnRegFamilia"));
        btnRegFamilia->setGeometry(QRect(40, 120, 141, 41));
        btnRegEstilo = new QPushButton(centralWidget1);
        btnRegEstilo->setObjectName(QStringLiteral("btnRegEstilo"));
        btnRegEstilo->setGeometry(QRect(40, 170, 141, 41));
        btnBuscarCerveza = new QPushButton(centralWidget1);
        btnBuscarCerveza->setObjectName(QStringLiteral("btnBuscarCerveza"));
        btnBuscarCerveza->setGeometry(QRect(340, 70, 141, 41));
        btnListaCervezas = new QPushButton(centralWidget1);
        btnListaCervezas->setObjectName(QStringLiteral("btnListaCervezas"));
        btnListaCervezas->setGeometry(QRect(340, 120, 141, 41));
        btnBorrarDatos = new QPushButton(centralWidget1);
        btnBorrarDatos->setObjectName(QStringLiteral("btnBorrarDatos"));
        btnBorrarDatos->setGeometry(QRect(340, 170, 141, 41));
        VentanaPrincipal->setCentralWidget(centralWidget1);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 21));
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
        btnRegCerveza->setText(QApplication::translate("VentanaPrincipal", "Registrar cerveza", 0));
        btnsalir->setText(QApplication::translate("VentanaPrincipal", "salir", 0));
        btnRegFamilia->setText(QApplication::translate("VentanaPrincipal", "Registar familia cerveza", 0));
        btnRegEstilo->setText(QApplication::translate("VentanaPrincipal", "Registrar estilo cerveza", 0));
        btnBuscarCerveza->setText(QApplication::translate("VentanaPrincipal", "Buscar cerveza", 0));
        btnListaCervezas->setText(QApplication::translate("VentanaPrincipal", "Lista cervezas por familia", 0));
        btnBorrarDatos->setText(QApplication::translate("VentanaPrincipal", "Borrar datos", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
