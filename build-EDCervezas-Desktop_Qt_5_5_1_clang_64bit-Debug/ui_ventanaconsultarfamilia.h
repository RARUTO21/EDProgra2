/********************************************************************************
** Form generated from reading UI file 'ventanaconsultarfamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACONSULTARFAMILIA_H
#define UI_VENTANACONSULTARFAMILIA_H

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

class Ui_VentanaConsultarFamilia
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QLineEdit *lneColor;
    QLineEdit *lneTemperatura;
    QLabel *label_7;
    QPushButton *btnConsultar;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *lneNombre;
    QLabel *label_10;
    QLineEdit *lneTiempoDeFermentacion;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lneCuerpo;
    QLineEdit *lnePrecio;
    QComboBox *comboFamilias;
    QLineEdit *lneTipoDeFermentacion;
    QLabel *label_2;
    QTextEdit *txeDescripcion;

    void setupUi(QDialog *VentanaConsultarFamilia)
    {
        if (VentanaConsultarFamilia->objectName().isEmpty())
            VentanaConsultarFamilia->setObjectName(QStringLiteral("VentanaConsultarFamilia"));
        VentanaConsultarFamilia->resize(541, 443);
        buttonBox = new QDialogButtonBox(VentanaConsultarFamilia);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(350, 400, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(VentanaConsultarFamilia);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 260, 81, 16));
        lneColor = new QLineEdit(VentanaConsultarFamilia);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setEnabled(false);
        lneColor->setGeometry(QRect(180, 300, 151, 24));
        lneTemperatura = new QLineEdit(VentanaConsultarFamilia);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setEnabled(false);
        lneTemperatura->setGeometry(QRect(180, 260, 151, 24));
        label_7 = new QLabel(VentanaConsultarFamilia);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 340, 59, 16));
        btnConsultar = new QPushButton(VentanaConsultarFamilia);
        btnConsultar->setObjectName(QStringLiteral("btnConsultar"));
        btnConsultar->setGeometry(QRect(380, 200, 91, 24));
        label_9 = new QLabel(VentanaConsultarFamilia);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 20, 231, 16));
        label = new QLabel(VentanaConsultarFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 59, 16));
        label_6 = new QLabel(VentanaConsultarFamilia);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 300, 59, 16));
        lneNombre = new QLineEdit(VentanaConsultarFamilia);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setEnabled(false);
        lneNombre->setGeometry(QRect(180, 70, 151, 24));
        label_10 = new QLabel(VentanaConsultarFamilia);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 130, 59, 16));
        lneTiempoDeFermentacion = new QLineEdit(VentanaConsultarFamilia);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setEnabled(false);
        lneTiempoDeFermentacion->setGeometry(QRect(180, 220, 151, 24));
        label_3 = new QLabel(VentanaConsultarFamilia);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 180, 141, 16));
        label_8 = new QLabel(VentanaConsultarFamilia);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 380, 59, 16));
        label_4 = new QLabel(VentanaConsultarFamilia);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 151, 16));
        lneCuerpo = new QLineEdit(VentanaConsultarFamilia);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setEnabled(false);
        lneCuerpo->setGeometry(QRect(180, 340, 151, 24));
        lnePrecio = new QLineEdit(VentanaConsultarFamilia);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setEnabled(false);
        lnePrecio->setGeometry(QRect(180, 380, 151, 24));
        comboFamilias = new QComboBox(VentanaConsultarFamilia);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(380, 160, 151, 24));
        lneTipoDeFermentacion = new QLineEdit(VentanaConsultarFamilia);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setEnabled(false);
        lneTipoDeFermentacion->setGeometry(QRect(180, 180, 151, 24));
        label_2 = new QLabel(VentanaConsultarFamilia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 81, 16));
        txeDescripcion = new QTextEdit(VentanaConsultarFamilia);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setEnabled(false);
        txeDescripcion->setGeometry(QRect(180, 110, 151, 51));

        retranslateUi(VentanaConsultarFamilia);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaConsultarFamilia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaConsultarFamilia, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaConsultarFamilia);
    } // setupUi

    void retranslateUi(QDialog *VentanaConsultarFamilia)
    {
        VentanaConsultarFamilia->setWindowTitle(QApplication::translate("VentanaConsultarFamilia", "Dialog", 0));
        label_5->setText(QApplication::translate("VentanaConsultarFamilia", "Temperatura", 0));
        label_7->setText(QApplication::translate("VentanaConsultarFamilia", "Cuerpo", 0));
        btnConsultar->setText(QApplication::translate("VentanaConsultarFamilia", "Consultar", 0));
        label_9->setText(QApplication::translate("VentanaConsultarFamilia", "CONSULTAR FAMILIAS DE CERVEZA", 0));
        label->setText(QApplication::translate("VentanaConsultarFamilia", "Nombre", 0));
        label_6->setText(QApplication::translate("VentanaConsultarFamilia", "Color", 0));
        label_10->setText(QApplication::translate("VentanaConsultarFamilia", "Familia", 0));
        label_3->setText(QApplication::translate("VentanaConsultarFamilia", "Tipo de Fermentaci\303\263n", 0));
        label_8->setText(QApplication::translate("VentanaConsultarFamilia", "Precio", 0));
        label_4->setText(QApplication::translate("VentanaConsultarFamilia", "Tiempo de Fermentaci\303\263n", 0));
        label_2->setText(QApplication::translate("VentanaConsultarFamilia", "Descripci\303\263n", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaConsultarFamilia: public Ui_VentanaConsultarFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACONSULTARFAMILIA_H
