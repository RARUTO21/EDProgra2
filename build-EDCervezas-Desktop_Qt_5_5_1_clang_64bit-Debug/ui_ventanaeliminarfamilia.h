/********************************************************************************
** Form generated from reading UI file 'ventanaeliminarfamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAELIMINARFAMILIA_H
#define UI_VENTANAELIMINARFAMILIA_H

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

class Ui_VentanaEliminarFamilia
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboFamilias;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnEliminar;

    void setupUi(QDialog *VentanaEliminarFamilia)
    {
        if (VentanaEliminarFamilia->objectName().isEmpty())
            VentanaEliminarFamilia->setObjectName(QStringLiteral("VentanaEliminarFamilia"));
        VentanaEliminarFamilia->resize(297, 329);
        buttonBox = new QDialogButtonBox(VentanaEliminarFamilia);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 270, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboFamilias = new QComboBox(VentanaEliminarFamilia);
        comboFamilias->setObjectName(QStringLiteral("comboFamilias"));
        comboFamilias->setGeometry(QRect(60, 150, 181, 24));
        label = new QLabel(VentanaEliminarFamilia);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 120, 59, 16));
        label_2 = new QLabel(VentanaEliminarFamilia);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 201, 16));
        btnEliminar = new QPushButton(VentanaEliminarFamilia);
        btnEliminar->setObjectName(QStringLiteral("btnEliminar"));
        btnEliminar->setGeometry(QRect(100, 200, 80, 24));

        retranslateUi(VentanaEliminarFamilia);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaEliminarFamilia, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaEliminarFamilia, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaEliminarFamilia);
    } // setupUi

    void retranslateUi(QDialog *VentanaEliminarFamilia)
    {
        VentanaEliminarFamilia->setWindowTitle(QApplication::translate("VentanaEliminarFamilia", "Dialog", 0));
        label->setText(QApplication::translate("VentanaEliminarFamilia", "Familia", 0));
        label_2->setText(QApplication::translate("VentanaEliminarFamilia", "ELIMINAR FAMILIA DE CERVEZA", 0));
        btnEliminar->setText(QApplication::translate("VentanaEliminarFamilia", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaEliminarFamilia: public Ui_VentanaEliminarFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAELIMINARFAMILIA_H
