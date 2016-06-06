/********************************************************************************
** Form generated from reading UI file 'ventanaregistrarestilo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAREGISTRARESTILO_H
#define UI_VENTANAREGISTRARESTILO_H

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

class Ui_VentanaRegistrarEstilo
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QLabel *label_9;
    QLineEdit *lneTipoDeFermentacion;
    QLabel *label_4;
    QTextEdit *txeDescripcion;
    QLineEdit *lnePrecio;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lneNombre;
    QLineEdit *lneColor;
    QLineEdit *lneCuerpo;
    QLineEdit *lneTemperatura;
    QLabel *label_5;
    QLineEdit *lneTiempoDeFermentacion;
    QLabel *label;
    QLabel *label_10;
    QComboBox *comboFamilias;

    void setupUi(QDialog *VentanaRegistrarEstilo)
    {
        if (VentanaRegistrarEstilo->objectName().isEmpty())
            VentanaRegistrarEstilo->setObjectName(QStringLiteral("VentanaRegistrarEstilo"));
        VentanaRegistrarEstilo->resize(355, 516);
        buttonBox = new QDialogButtonBox(VentanaRegistrarEstilo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(170, 470, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(VentanaRegistrarEstilo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 81, 16));
        label_9 = new QLabel(VentanaRegistrarEstilo);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 30, 241, 16));
        lneTipoDeFermentacion = new QLineEdit(VentanaRegistrarEstilo);
        lneTipoDeFermentacion->setObjectName(QStringLiteral("lneTipoDeFermentacion"));
        lneTipoDeFermentacion->setGeometry(QRect(190, 200, 151, 24));
        label_4 = new QLabel(VentanaRegistrarEstilo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 240, 151, 16));
        txeDescripcion = new QTextEdit(VentanaRegistrarEstilo);
        txeDescripcion->setObjectName(QStringLiteral("txeDescripcion"));
        txeDescripcion->setGeometry(QRect(190, 130, 151, 51));
        lnePrecio = new QLineEdit(VentanaRegistrarEstilo);
        lnePrecio->setObjectName(QStringLiteral("lnePrecio"));
        lnePrecio->setGeometry(QRect(190, 400, 151, 24));
        label_6 = new QLabel(VentanaRegistrarEstilo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 320, 59, 16));
        label_8 = new QLabel(VentanaRegistrarEstilo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 400, 59, 16));
        label_3 = new QLabel(VentanaRegistrarEstilo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 200, 141, 16));
        label_7 = new QLabel(VentanaRegistrarEstilo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 360, 59, 16));
        lneNombre = new QLineEdit(VentanaRegistrarEstilo);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setGeometry(QRect(190, 90, 151, 24));
        lneColor = new QLineEdit(VentanaRegistrarEstilo);
        lneColor->setObjectName(QStringLiteral("lneColor"));
        lneColor->setGeometry(QRect(190, 320, 151, 24));
        lneCuerpo = new QLineEdit(VentanaRegistrarEstilo);
        lneCuerpo->setObjectName(QStringLiteral("lneCuerpo"));
        lneCuerpo->setGeometry(QRect(190, 360, 151, 24));
        lneTemperatura = new QLineEdit(VentanaRegistrarEstilo);
        lneTemperatura->setObjectName(QStringLiteral("lneTemperatura"));
        lneTemperatura->setGeometry(QRect(190, 280, 151, 24));
        label_5 = new QLabel(VentanaRegistrarEstilo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 280, 81, 16));
        lneTiempoDeFermentacion = new QLineEdit(VentanaRegistrarEstilo);
        lneTiempoDeFermentacion->setObjectName(QStringLiteral("lneTiempoDeFermentacion"));
        lneTiempoDeFermentacion->setGeometry(QRect(190, 240, 151, 24));
        label = new QLabel(VentanaRegistrarEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 59, 16));
        label_10 = new QLabel(VentanaRegistrarEstilo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 440, 59, 16));
        comboFamilias = new QComboBox(VentanaRegistrarEstilo);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(190, 440, 151, 24));
        QWidget::setTabOrder(lneNombre, txeDescripcion);
        QWidget::setTabOrder(txeDescripcion, lneTipoDeFermentacion);
        QWidget::setTabOrder(lneTipoDeFermentacion, lneTiempoDeFermentacion);
        QWidget::setTabOrder(lneTiempoDeFermentacion, lneTemperatura);
        QWidget::setTabOrder(lneTemperatura, lneColor);
        QWidget::setTabOrder(lneColor, lneCuerpo);
        QWidget::setTabOrder(lneCuerpo, lnePrecio);
        QWidget::setTabOrder(lnePrecio, comboFamilias);

        retranslateUi(VentanaRegistrarEstilo);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaRegistrarEstilo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaRegistrarEstilo, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaRegistrarEstilo);
    } // setupUi

    void retranslateUi(QDialog *VentanaRegistrarEstilo)
    {
        VentanaRegistrarEstilo->setWindowTitle(QApplication::translate("VentanaRegistrarEstilo", "Dialog", 0));
        label_2->setText(QApplication::translate("VentanaRegistrarEstilo", "Descripci\303\263n", 0));
        label_9->setText(QApplication::translate("VentanaRegistrarEstilo", "REGISTRO DE ESTILO DE CERVEZA", 0));
        label_4->setText(QApplication::translate("VentanaRegistrarEstilo", "Tiempo de Fermentaci\303\263n", 0));
        label_6->setText(QApplication::translate("VentanaRegistrarEstilo", "Color", 0));
        label_8->setText(QApplication::translate("VentanaRegistrarEstilo", "Precio", 0));
        label_3->setText(QApplication::translate("VentanaRegistrarEstilo", "Tipo de Fermentaci\303\263n", 0));
        label_7->setText(QApplication::translate("VentanaRegistrarEstilo", "Cuerpo", 0));
        label_5->setText(QApplication::translate("VentanaRegistrarEstilo", "Temperatura", 0));
        label->setText(QApplication::translate("VentanaRegistrarEstilo", "Nombre", 0));
        label_10->setText(QApplication::translate("VentanaRegistrarEstilo", "Familia", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaRegistrarEstilo: public Ui_VentanaRegistrarEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAREGISTRARESTILO_H
