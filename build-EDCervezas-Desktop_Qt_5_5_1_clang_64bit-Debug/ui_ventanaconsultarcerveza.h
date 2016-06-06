/********************************************************************************
** Form generated from reading UI file 'ventanaconsultarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONSULTARCERVEZA_H
#define UI_VENTANACONSULTARCERVEZA_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VentanaConsultarCerveza
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_6;
    QLineEdit *lneTemperatura;
    QLineEdit *lneCuerpo;
    QLineEdit *lneNombre;
    QLabel *label_3;
    QLineEdit *lneTipoDeFermentacion;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *txeDescripcion;
    QLineEdit *lnePrecio;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lneColor;
    QLabel *label_8;
    QLineEdit *lneTiempoDeFermentacion;
    QLabel *label_9;
    QComboBox *comboFamilias;
    QComboBox *comboEstilos;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *btnConsultar;
    QLabel *label_12;
    QComboBox *comboCervezas;

    void setupUi(QDialog *VentanaConsultarCerveza)
    {
        if (VentanaConsultarCerveza->objectName().isEmpty())
            VentanaConsultarCerveza->setObjectName(QStringLiteral("VentanaConsultarCerveza"));
        VentanaConsultarCerveza->resize(539, 480);
        buttonBox = new QDialogButtonBox(VentanaConsultarCerveza);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 440, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_6 = new QLabel(VentanaConsultarCerveza);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 310, 59, 16));
        lneTemperatura = new QLineEdit(VentanaConsultarCerveza);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setEnabled(false);
        lneTemperatura->setGeometry(QRect(180, 270, 151, 24));
        lneCuerpo = new QLineEdit(VentanaConsultarCerveza);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setEnabled(false);
        lneCuerpo->setGeometry(QRect(180, 350, 151, 24));
        lneNombre = new QLineEdit(VentanaConsultarCerveza);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setEnabled(false);
        lneNombre->setGeometry(QRect(180, 80, 151, 24));
        label_3 = new QLabel(VentanaConsultarCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 141, 16));
        lneTipoDeFermentacion = new QLineEdit(VentanaConsultarCerveza);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setEnabled(false);
        lneTipoDeFermentacion->setGeometry(QRect(180, 190, 151, 24));
        label_7 = new QLabel(VentanaConsultarCerveza);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 350, 59, 16));
        label = new QLabel(VentanaConsultarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 59, 16));
        label_2 = new QLabel(VentanaConsultarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 81, 16));
        txeDescripcion = new QTextEdit(VentanaConsultarCerveza);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setEnabled(false);
        txeDescripcion->setGeometry(QRect(180, 120, 151, 51));
        lnePrecio = new QLineEdit(VentanaConsultarCerveza);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setEnabled(false);
        lnePrecio->setGeometry(QRect(180, 390, 151, 24));
        label_4 = new QLabel(VentanaConsultarCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 230, 151, 16));
        label_5 = new QLabel(VentanaConsultarCerveza);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 270, 81, 16));
        lneColor = new QLineEdit(VentanaConsultarCerveza);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setEnabled(false);
        lneColor->setGeometry(QRect(180, 310, 151, 24));
        label_8 = new QLabel(VentanaConsultarCerveza);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 390, 59, 16));
        lneTiempoDeFermentacion = new QLineEdit(VentanaConsultarCerveza);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setEnabled(false);
        lneTiempoDeFermentacion->setGeometry(QRect(180, 230, 151, 24));
        label_9 = new QLabel(VentanaConsultarCerveza);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(80, 30, 231, 16));
        comboFamilias = new QComboBox(VentanaConsultarCerveza);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(380, 170, 151, 24));
        comboEstilos = new QComboBox(VentanaConsultarCerveza);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(380, 240, 151, 24));
        label_10 = new QLabel(VentanaConsultarCerveza);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 140, 59, 16));
        label_11 = new QLabel(VentanaConsultarCerveza);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(380, 210, 59, 16));
        btnConsultar = new QPushButton(VentanaConsultarCerveza);
        btnConsultar->setObjectName(QStringLiteral("btnConsultar"));
        btnConsultar->setGeometry(QRect(380, 350, 91, 24));
        label_12 = new QLabel(VentanaConsultarCerveza);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(380, 280, 59, 16));
        comboCervezas = new QComboBox(VentanaConsultarCerveza);
        comboCervezas->setObjectName(QStringLiteral("comboCervezas"));
        comboCervezas->setGeometry(QRect(380, 310, 151, 24));

        retranslateUi(VentanaConsultarCerveza);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaConsultarCerveza, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaConsultarCerveza, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaConsultarCerveza);
    } // setupUi

    void retranslateUi(QDialog *VentanaConsultarCerveza)
    {
        VentanaConsultarCerveza->setWindowTitle(QApplication::translate("VentanaConsultarCerveza", "Dialog", 0));
        label_6->setText(QApplication::translate("VentanaConsultarCerveza", "Color", 0));
        label_3->setText(QApplication::translate("VentanaConsultarCerveza", "Tipo de Fermentaci\303\263n", 0));
        label_7->setText(QApplication::translate("VentanaConsultarCerveza", "Cuerpo", 0));
        label->setText(QApplication::translate("VentanaConsultarCerveza", "Nombre", 0));
        label_2->setText(QApplication::translate("VentanaConsultarCerveza", "Descripci\303\263n", 0));
        label_4->setText(QApplication::translate("VentanaConsultarCerveza", "Tiempo de Fermentaci\303\263n", 0));
        label_5->setText(QApplication::translate("VentanaConsultarCerveza", "Temperatura", 0));
        label_8->setText(QApplication::translate("VentanaConsultarCerveza", "Precio", 0));
        label_9->setText(QApplication::translate("VentanaConsultarCerveza", "CONSULTAR VALORES DE CERVEZA", 0));
        label_10->setText(QApplication::translate("VentanaConsultarCerveza", "Familia", 0));
        label_11->setText(QApplication::translate("VentanaConsultarCerveza", "Estilo", 0));
        btnConsultar->setText(QApplication::translate("VentanaConsultarCerveza", "Consultar", 0));
        label_12->setText(QApplication::translate("VentanaConsultarCerveza", "Cerveza", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaConsultarCerveza: public Ui_VentanaConsultarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONSULTARCERVEZA_H
