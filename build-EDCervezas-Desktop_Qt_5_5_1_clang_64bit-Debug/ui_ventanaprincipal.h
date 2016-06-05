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
    QPushButton *btnRegCerveza;
    QPushButton *btnsalir;
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
        VentanaPrincipal->resize(509, 350);
        VentanaPrincipal->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127);"));
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnRegCerveza = new QPushButton(centralWidget);
        btnRegCerveza->setObjectName(QStringLiteral("btnRegCerveza"));
        btnRegCerveza->setGeometry(QRect(40, 70, 141, 41));
        btnRegCerveza->setStyleSheet(QStringLiteral(""));
        btnsalir = new QPushButton(centralWidget);
        btnsalir->setObjectName(QStringLiteral("btnsalir"));
        btnsalir->setGeometry(QRect(350, 250, 75, 23));
        btnBuscarCerveza = new QPushButton(centralWidget);
        btnBuscarCerveza->setObjectName(QStringLiteral("btnBuscarCerveza"));
        btnBuscarCerveza->setGeometry(QRect(40, 130, 141, 41));
        btnBuscarCerveza->setStyleSheet(QStringLiteral(""));
        btnListaCervezas = new QPushButton(centralWidget);
        btnListaCervezas->setObjectName(QStringLiteral("btnListaCervezas"));
        btnListaCervezas->setGeometry(QRect(260, 70, 141, 41));
        btnListaCervezas->setStyleSheet(QStringLiteral(""));
        btnBorrarDatos = new QPushButton(centralWidget);
        btnBorrarDatos->setObjectName(QStringLiteral("btnBorrarDatos"));
        btnBorrarDatos->setGeometry(QRect(260, 130, 141, 41));
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 21));
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
