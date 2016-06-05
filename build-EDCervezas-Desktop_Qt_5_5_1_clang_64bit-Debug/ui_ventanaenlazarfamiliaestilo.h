/********************************************************************************
** Form generated from reading UI file 'ventanaenlazarfamiliaestilo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAENLAZARFAMILIAESTILO_H
#define UI_VENTANAENLAZARFAMILIAESTILO_H

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

class Ui_VentanaEnlazarFamiliaEstilo
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboFamilias;
    QComboBox *comboEstilos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnEnlazar;

    void setupUi(QDialog *VentanaEnlazarFamiliaEstilo)
    {
        if (VentanaEnlazarFamiliaEstilo->objectName().isEmpty())
            VentanaEnlazarFamiliaEstilo->setObjectName(QStringLiteral("VentanaEnlazarFamiliaEstilo"));
        VentanaEnlazarFamiliaEstilo->resize(486, 247);
        buttonBox = new QDialogButtonBox(VentanaEnlazarFamiliaEstilo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 200, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboFamilias = new QComboBox(VentanaEnlazarFamiliaEstilo);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(20, 110, 191, 24));
        comboEstilos = new QComboBox(VentanaEnlazarFamiliaEstilo);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(290, 110, 191, 24));
        label = new QLabel(VentanaEnlazarFamiliaEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 110, 59, 16));
        label_2 = new QLabel(VentanaEnlazarFamiliaEstilo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 59, 16));
        label_3 = new QLabel(VentanaEnlazarFamiliaEstilo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 80, 59, 16));
        label_4 = new QLabel(VentanaEnlazarFamiliaEstilo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 10, 181, 16));
        btnEnlazar = new QPushButton(VentanaEnlazarFamiliaEstilo);
        btnEnlazar->setObjectName(QStringLiteral("btnEnlazar"));
        btnEnlazar->setGeometry(QRect(210, 150, 80, 24));

        retranslateUi(VentanaEnlazarFamiliaEstilo);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaEnlazarFamiliaEstilo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaEnlazarFamiliaEstilo, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaEnlazarFamiliaEstilo);
    } // setupUi

    void retranslateUi(QDialog *VentanaEnlazarFamiliaEstilo)
    {
        VentanaEnlazarFamiliaEstilo->setWindowTitle(QApplication::translate("VentanaEnlazarFamiliaEstilo", "Dialog", 0));
        label->setText(QApplication::translate("VentanaEnlazarFamiliaEstilo", "<->", 0));
        label_2->setText(QApplication::translate("VentanaEnlazarFamiliaEstilo", "Familia", 0));
        label_3->setText(QApplication::translate("VentanaEnlazarFamiliaEstilo", "Estilo", 0));
        label_4->setText(QApplication::translate("VentanaEnlazarFamiliaEstilo", "ENLAZAR FAMILIA - ESTILO", 0));
        btnEnlazar->setText(QApplication::translate("VentanaEnlazarFamiliaEstilo", "Enlazar", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaEnlazarFamiliaEstilo: public Ui_VentanaEnlazarFamiliaEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAENLAZARFAMILIAESTILO_H
