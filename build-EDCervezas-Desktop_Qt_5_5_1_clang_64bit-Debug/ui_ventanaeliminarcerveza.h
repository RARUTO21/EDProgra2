/********************************************************************************
** Form generated from reading UI file 'ventanaeliminarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAELIMINARCERVEZA_H
#define UI_VENTANAELIMINARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VentanaEliminarCerveza
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnEliminar;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboEstilos;
    QLabel *label_4;
    QComboBox *comboCervezas;

    void setupUi(QDialog *VentanaEliminarCerveza)
    {
        if (VentanaEliminarCerveza->objectName().isEmpty())
            VentanaEliminarCerveza->setObjectName(QStringLiteral("VentanaEliminarCerveza"));
        VentanaEliminarCerveza->resize(274, 421);
        buttonBox = new QDialogButtonBox(VentanaEliminarCerveza);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 380, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btnEliminar = new QPushButton(VentanaEliminarCerveza);
        btnEliminar->setObjectName(QStringLiteral("btnEliminar"));
        btnEliminar->setGeometry(QRect(80, 300, 101, 24));
        label_3 = new QLabel(VentanaEliminarCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 110, 59, 16));
        label_2 = new QLabel(VentanaEliminarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 211, 20));
        comboEstilos = new QComboBox(VentanaEliminarCerveza);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(50, 140, 181, 24));
        label_4 = new QLabel(VentanaEliminarCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 200, 59, 16));
        comboCervezas = new QComboBox(VentanaEliminarCerveza);
        comboCervezas->setObjectName(QStringLiteral("comboCervezas"));
        comboCervezas->setGeometry(QRect(50, 230, 181, 24));

        retranslateUi(VentanaEliminarCerveza);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaEliminarCerveza, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaEliminarCerveza, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaEliminarCerveza);
    } // setupUi

    void retranslateUi(QDialog *VentanaEliminarCerveza)
    {
        VentanaEliminarCerveza->setWindowTitle(QApplication::translate("VentanaEliminarCerveza", "Dialog", 0));
        btnEliminar->setText(QApplication::translate("VentanaEliminarCerveza", "Desenlazar", 0));
        label_3->setText(QApplication::translate("VentanaEliminarCerveza", "Estilo", 0));
        label_2->setText(QApplication::translate("VentanaEliminarCerveza", "DESENLAZAR ESTILO - CERVEZA", 0));
        label_4->setText(QApplication::translate("VentanaEliminarCerveza", "Cerveza", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaEliminarCerveza: public Ui_VentanaEliminarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAELIMINARCERVEZA_H
