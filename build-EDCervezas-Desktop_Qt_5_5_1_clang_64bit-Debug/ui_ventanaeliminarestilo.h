/********************************************************************************
** Form generated from reading UI file 'ventanaeliminarestilo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAELIMINARESTILO_H
#define UI_VENTANAELIMINARESTILO_H

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

class Ui_VentanaEliminarEstilo
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboFamilias;
    QLabel *label;
    QPushButton *btnEliminar;
    QLabel *label_2;
    QComboBox *comboEstilos;
    QLabel *label_3;

    void setupUi(QDialog *VentanaEliminarEstilo)
    {
        if (VentanaEliminarEstilo->objectName().isEmpty())
            VentanaEliminarEstilo->setObjectName(QStringLiteral("VentanaEliminarEstilo"));
        VentanaEliminarEstilo->resize(304, 378);
        buttonBox = new QDialogButtonBox(VentanaEliminarEstilo);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 330, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboFamilias = new QComboBox(VentanaEliminarEstilo);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(60, 150, 181, 24));
        label = new QLabel(VentanaEliminarEstilo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 120, 59, 16));
        btnEliminar = new QPushButton(VentanaEliminarEstilo);
        btnEliminar->setObjectName(QStringLiteral("btnEliminar"));
        btnEliminar->setGeometry(QRect(100, 290, 91, 24));
        label_2 = new QLabel(VentanaEliminarEstilo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 201, 16));
        comboEstilos = new QComboBox(VentanaEliminarEstilo);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(60, 240, 181, 24));
        label_3 = new QLabel(VentanaEliminarEstilo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 210, 59, 16));

        retranslateUi(VentanaEliminarEstilo);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaEliminarEstilo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaEliminarEstilo, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaEliminarEstilo);
    } // setupUi

    void retranslateUi(QDialog *VentanaEliminarEstilo)
    {
        VentanaEliminarEstilo->setWindowTitle(QApplication::translate("VentanaEliminarEstilo", "Dialog", 0));
        label->setText(QApplication::translate("VentanaEliminarEstilo", "Familia", 0));
        btnEliminar->setText(QApplication::translate("VentanaEliminarEstilo", "Desenlazar", 0));
        label_2->setText(QApplication::translate("VentanaEliminarEstilo", "DESENLAZAR FAMILIA - ESTILO", 0));
        label_3->setText(QApplication::translate("VentanaEliminarEstilo", "Estilo", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaEliminarEstilo: public Ui_VentanaEliminarEstilo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAELIMINARESTILO_H
