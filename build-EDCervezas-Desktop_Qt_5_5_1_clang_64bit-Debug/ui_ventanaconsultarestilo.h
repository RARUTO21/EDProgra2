/********************************************************************************
** Form generated from reading UI file 'ventanaconsultarestilo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONSULTARESTILO_H
#define UI_VENTANACONSULTARESTILO_H

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

class Ui_VentanaConsultarEstilo
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lneColor;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_5;
    QTextEdit *txeDescripcion;
    QComboBox *comboEstilos;
    QLineEdit *lneTiempoDeFermentacion;
    QLineEdit *lneTemperatura;
    QLabel *label_6;
    QPushButton *btnConsultar;
    QLineEdit *lnePrecio;
    QLineEdit *lneNombre;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *lneCuerpo;
    QLabel *label_4;
    QLineEdit *lneTipoDeFermentacion;
    QLabel *label_7;
    QComboBox *comboFamilias;
    QLabel *label_2;
    QLabel *label_9;

    void setupUi(QDialog *VentanaConsultarEstilo)
    {
        if (VentanaConsultarEstilo->objectName().isEmpty())
            VentanaConsultarEstilo->setObjectName(QStringLiteral("VentanaConsultarEstilo"));
        VentanaConsultarEstilo->resize(566, 480);
        buttonBox = new QDialogButtonBox(VentanaConsultarEstilo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(380, 440, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lneColor = new QLineEdit(VentanaConsultarEstilo);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setEnabled(false);
        lneColor->setGeometry(QRect(190, 320, 151, 24));
        label_10 = new QLabel(VentanaConsultarEstilo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(390, 150, 59, 16));
        label_11 = new QLabel(VentanaConsultarEstilo);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(390, 220, 59, 16));
        label_5 = new QLabel(VentanaConsultarEstilo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 280, 81, 16));
        txeDescripcion = new QTextEdit(VentanaConsultarEstilo);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setEnabled(false);
        txeDescripcion->setGeometry(QRect(190, 130, 151, 51));
        comboEstilos = new QComboBox(VentanaConsultarEstilo);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(390, 250, 151, 24));
        lneTiempoDeFermentacion = new QLineEdit(VentanaConsultarEstilo);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setEnabled(false);
        lneTiempoDeFermentacion->setGeometry(QRect(190, 240, 151, 24));
        lneTemperatura = new QLineEdit(VentanaConsultarEstilo);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setEnabled(false);
        lneTemperatura->setGeometry(QRect(190, 280, 151, 24));
        label_6 = new QLabel(VentanaConsultarEstilo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 320, 59, 16));
        btnConsultar = new QPushButton(VentanaConsultarEstilo);
        btnConsultar->setObjectName(QStringLiteral("btnConsultar"));
        btnConsultar->setGeometry(QRect(390, 290, 91, 24));
        lnePrecio = new QLineEdit(VentanaConsultarEstilo);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setEnabled(false);
        lnePrecio->setGeometry(QRect(190, 400, 151, 24));
        lneNombre = new QLineEdit(VentanaConsultarEstilo);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setEnabled(false);
        lneNombre->setGeometry(QRect(190, 90, 151, 24));
        label = new QLabel(VentanaConsultarEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 59, 16));
        label_3 = new QLabel(VentanaConsultarEstilo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 200, 141, 16));
        label_8 = new QLabel(VentanaConsultarEstilo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 400, 59, 16));
        lneCuerpo = new QLineEdit(VentanaConsultarEstilo);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setEnabled(false);
        lneCuerpo->setGeometry(QRect(190, 360, 151, 24));
        label_4 = new QLabel(VentanaConsultarEstilo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 240, 151, 16));
        lneTipoDeFermentacion = new QLineEdit(VentanaConsultarEstilo);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setEnabled(false);
        lneTipoDeFermentacion->setGeometry(QRect(190, 200, 151, 24));
        label_7 = new QLabel(VentanaConsultarEstilo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 360, 59, 16));
        comboFamilias = new QComboBox(VentanaConsultarEstilo);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(390, 180, 151, 24));
        label_2 = new QLabel(VentanaConsultarEstilo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 81, 16));
        label_9 = new QLabel(VentanaConsultarEstilo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 40, 231, 16));

        retranslateUi(VentanaConsultarEstilo);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaConsultarEstilo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaConsultarEstilo, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaConsultarEstilo);
    } // setupUi

    void retranslateUi(QDialog *VentanaConsultarEstilo)
    {
        VentanaConsultarEstilo->setWindowTitle(QApplication::translate("VentanaConsultarEstilo", "Dialog", 0));
        label_10->setText(QApplication::translate("VentanaConsultarEstilo", "Familia", 0));
        label_11->setText(QApplication::translate("VentanaConsultarEstilo", "Estilo", 0));
        label_5->setText(QApplication::translate("VentanaConsultarEstilo", "Temperatura", 0));
        label_6->setText(QApplication::translate("VentanaConsultarEstilo", "Color", 0));
        btnConsultar->setText(QApplication::translate("VentanaConsultarEstilo", "Consultar", 0));
        label->setText(QApplication::translate("VentanaConsultarEstilo", "Nombre", 0));
        label_3->setText(QApplication::translate("VentanaConsultarEstilo", "Tipo de Fermentaci\303\263n", 0));
        label_8->setText(QApplication::translate("VentanaConsultarEstilo", "Precio", 0));
        label_4->setText(QApplication::translate("VentanaConsultarEstilo", "Tiempo de Fermentaci\303\263n", 0));
        label_7->setText(QApplication::translate("VentanaConsultarEstilo", "Cuerpo", 0));
        label_2->setText(QApplication::translate("VentanaConsultarEstilo", "Descripci\303\263n", 0));
        label_9->setText(QApplication::translate("VentanaConsultarEstilo", "CONSULTAR ESTILO DE CERVEZA", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaConsultarEstilo: public Ui_VentanaConsultarEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONSULTARESTILO_H
