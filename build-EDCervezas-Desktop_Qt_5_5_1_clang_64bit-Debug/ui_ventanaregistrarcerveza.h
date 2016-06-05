/********************************************************************************
** Form generated from reading UI file 'ventanaregistrarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAREGISTRARCERVEZA_H
#define UI_VENTANAREGISTRARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VentanaRegistrarCerveza
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *lneTemperatura;
    QTextEdit *txeDescripcion;
    QLabel *label_7;
    QLineEdit *lneNombre;
    QLineEdit *lneColor;
    QLabel *label_2;
    QLineEdit *lneTiempoDeFermentacion;
    QLabel *label_9;
    QComboBox *comboFamilias;
    QLabel *label_4;
    QLineEdit *lneCuerpo;
    QLabel *label_10;
    QLineEdit *lnePrecio;
    QLabel *label_5;
    QLineEdit *lneTipoDeFermentacion;
    QLabel *label_3;
    QLabel *label_11;
    QComboBox *comboEstilos;

    void setupUi(QDialog *VentanaRegistrarCerveza)
    {
        if (VentanaRegistrarCerveza->objectName().isEmpty())
            VentanaRegistrarCerveza->setObjectName(QStringLiteral("VentanaRegistrarCerveza"));
        VentanaRegistrarCerveza->resize(365, 573);
        buttonBox = new QDialogButtonBox(VentanaRegistrarCerveza);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 530, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_8 = new QLabel(VentanaRegistrarCerveza);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 400, 59, 16));
        label = new QLabel(VentanaRegistrarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 59, 16));
        label_6 = new QLabel(VentanaRegistrarCerveza);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 320, 59, 16));
        lneTemperatura = new QLineEdit(VentanaRegistrarCerveza);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setGeometry(QRect(190, 280, 151, 24));
        txeDescripcion = new QTextEdit(VentanaRegistrarCerveza);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setGeometry(QRect(190, 130, 151, 51));
        label_7 = new QLabel(VentanaRegistrarCerveza);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 360, 59, 16));
        lneNombre = new QLineEdit(VentanaRegistrarCerveza);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setGeometry(QRect(190, 90, 151, 24));
        lneColor = new QLineEdit(VentanaRegistrarCerveza);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setGeometry(QRect(190, 320, 151, 24));
        label_2 = new QLabel(VentanaRegistrarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 81, 16));
        lneTiempoDeFermentacion = new QLineEdit(VentanaRegistrarCerveza);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setGeometry(QRect(190, 240, 151, 24));
        label_9 = new QLabel(VentanaRegistrarCerveza);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 30, 241, 16));
        comboFamilias = new QComboBox(VentanaRegistrarCerveza);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(190, 440, 151, 24));
        label_4 = new QLabel(VentanaRegistrarCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 240, 151, 16));
        lneCuerpo = new QLineEdit(VentanaRegistrarCerveza);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setGeometry(QRect(190, 360, 151, 24));
        label_10 = new QLabel(VentanaRegistrarCerveza);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 440, 59, 16));
        lnePrecio = new QLineEdit(VentanaRegistrarCerveza);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setGeometry(QRect(190, 400, 151, 24));
        label_5 = new QLabel(VentanaRegistrarCerveza);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 280, 81, 16));
        lneTipoDeFermentacion = new QLineEdit(VentanaRegistrarCerveza);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setGeometry(QRect(190, 200, 151, 24));
        label_3 = new QLabel(VentanaRegistrarCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 200, 141, 16));
        label_11 = new QLabel(VentanaRegistrarCerveza);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 480, 59, 16));
        comboEstilos = new QComboBox(VentanaRegistrarCerveza);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(190, 480, 151, 24));

        retranslateUi(VentanaRegistrarCerveza);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaRegistrarCerveza, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaRegistrarCerveza, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaRegistrarCerveza);
    } // setupUi

    void retranslateUi(QDialog *VentanaRegistrarCerveza)
    {
        VentanaRegistrarCerveza->setWindowTitle(QApplication::translate("VentanaRegistrarCerveza", "Dialog", 0));
        label_8->setText(QApplication::translate("VentanaRegistrarCerveza", "Precio", 0));
        label->setText(QApplication::translate("VentanaRegistrarCerveza", "Nombre", 0));
        label_6->setText(QApplication::translate("VentanaRegistrarCerveza", "Color", 0));
        label_7->setText(QApplication::translate("VentanaRegistrarCerveza", "Cuerpo", 0));
        label_2->setText(QApplication::translate("VentanaRegistrarCerveza", "Descripci\303\263n", 0));
        label_9->setText(QApplication::translate("VentanaRegistrarCerveza", "REGISTRO DE CERVEZA", 0));
        label_4->setText(QApplication::translate("VentanaRegistrarCerveza", "Tiempo de Fermentaci\303\263n", 0));
        label_10->setText(QApplication::translate("VentanaRegistrarCerveza", "Familia", 0));
        label_5->setText(QApplication::translate("VentanaRegistrarCerveza", "Temperatura", 0));
        label_3->setText(QApplication::translate("VentanaRegistrarCerveza", "Tipo de Fermentaci\303\263n", 0));
        label_11->setText(QApplication::translate("VentanaRegistrarCerveza", "Estilo", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaRegistrarCerveza: public Ui_VentanaRegistrarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAREGISTRARCERVEZA_H
