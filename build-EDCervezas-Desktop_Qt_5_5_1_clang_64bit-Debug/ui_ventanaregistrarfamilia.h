/********************************************************************************
** Form generated from reading UI file 'ventanaregistrarfamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAREGISTRARFAMILIA_H
#define UI_VENTANAREGISTRARFAMILIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VentanaRegistrarFamilia
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QTextEdit *txeDescripcion;
    QLineEdit *lneNombre;
    QLabel *label_9;
    QLineEdit *lneTipoDeFermentacion;
    QLineEdit *lneTiempoDeFermentacion;
    QLineEdit *lneTemperatura;
    QLineEdit *lneColor;
    QLineEdit *lneCuerpo;
    QLineEdit *lnePrecio;

    void setupUi(QDialog *VentanaRegistrarFamilia)
    {
        if (VentanaRegistrarFamilia->objectName().isEmpty())
            VentanaRegistrarFamilia->setObjectName(QStringLiteral("VentanaRegistrarFamilia"));
        VentanaRegistrarFamilia->resize(351, 480);
        buttonBox = new QDialogButtonBox(VentanaRegistrarFamilia);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 440, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(VentanaRegistrarFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 59, 16));
        label_2 = new QLabel(VentanaRegistrarFamilia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 81, 16));
        label_3 = new QLabel(VentanaRegistrarFamilia);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 200, 141, 16));
        label_4 = new QLabel(VentanaRegistrarFamilia);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 240, 151, 16));
        label_5 = new QLabel(VentanaRegistrarFamilia);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 280, 81, 16));
        label_6 = new QLabel(VentanaRegistrarFamilia);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 320, 59, 16));
        label_7 = new QLabel(VentanaRegistrarFamilia);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 360, 59, 16));
        label_8 = new QLabel(VentanaRegistrarFamilia);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 400, 59, 16));
        txeDescripcion = new QTextEdit(VentanaRegistrarFamilia);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setGeometry(QRect(180, 130, 151, 51));
        lneNombre = new QLineEdit(VentanaRegistrarFamilia);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setGeometry(QRect(180, 90, 151, 24));
        label_9 = new QLabel(VentanaRegistrarFamilia);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 30, 211, 16));
        lneTipoDeFermentacion = new QLineEdit(VentanaRegistrarFamilia);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setGeometry(QRect(180, 200, 151, 24));
        lneTiempoDeFermentacion = new QLineEdit(VentanaRegistrarFamilia);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setGeometry(QRect(180, 240, 151, 24));
        lneTemperatura = new QLineEdit(VentanaRegistrarFamilia);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setGeometry(QRect(180, 280, 151, 24));
        lneColor = new QLineEdit(VentanaRegistrarFamilia);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setGeometry(QRect(180, 320, 151, 24));
        lneCuerpo = new QLineEdit(VentanaRegistrarFamilia);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setGeometry(QRect(180, 360, 151, 24));
        lnePrecio = new QLineEdit(VentanaRegistrarFamilia);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setGeometry(QRect(180, 400, 151, 24));

        retranslateUi(VentanaRegistrarFamilia);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaRegistrarFamilia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaRegistrarFamilia, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaRegistrarFamilia);
    } // setupUi

    void retranslateUi(QDialog *VentanaRegistrarFamilia)
    {
        VentanaRegistrarFamilia->setWindowTitle(QApplication::translate("VentanaRegistrarFamilia", "Dialog", 0));
        label->setText(QApplication::translate("VentanaRegistrarFamilia", "Nombre", 0));
        label_2->setText(QApplication::translate("VentanaRegistrarFamilia", "Descripci\303\263n", 0));
        label_3->setText(QApplication::translate("VentanaRegistrarFamilia", "Tipo de Fermentaci\303\263n", 0));
        label_4->setText(QApplication::translate("VentanaRegistrarFamilia", "Tiempo de Fermentaci\303\263n", 0));
        label_5->setText(QApplication::translate("VentanaRegistrarFamilia", "Temperatura", 0));
        label_6->setText(QApplication::translate("VentanaRegistrarFamilia", "Color", 0));
        label_7->setText(QApplication::translate("VentanaRegistrarFamilia", "Cuerpo", 0));
        label_8->setText(QApplication::translate("VentanaRegistrarFamilia", "Precio", 0));
        label_9->setText(QApplication::translate("VentanaRegistrarFamilia", "REGISTRO DE TIPO DE CERVEZA", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaRegistrarFamilia: public Ui_VentanaRegistrarFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAREGISTRARFAMILIA_H
