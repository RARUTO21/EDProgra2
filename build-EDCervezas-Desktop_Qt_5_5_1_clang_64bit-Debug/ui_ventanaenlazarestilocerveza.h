/********************************************************************************
** Form generated from reading UI file 'ventanaenlazarestilocerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAENLAZARESTILOCERVEZA_H
#define UI_VENTANAENLAZARESTILOCERVEZA_H

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

class Ui_VentanaEnlazarEstiloCerveza
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *comboCervezas;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *btnEnlazar;
    QLabel *label_3;
    QComboBox *comboEstilos;

    void setupUi(QDialog *VentanaEnlazarEstiloCerveza)
    {
        if (VentanaEnlazarEstiloCerveza->objectName().isEmpty())
            VentanaEnlazarEstiloCerveza->setObjectName(QStringLiteral("VentanaEnlazarEstiloCerveza"));
        VentanaEnlazarEstiloCerveza->resize(480, 245);
        buttonBox = new QDialogButtonBox(VentanaEnlazarEstiloCerveza);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(300, 200, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(VentanaEnlazarEstiloCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 110, 59, 16));
        comboCervezas = new QComboBox(VentanaEnlazarEstiloCerveza);
        comboCervezas->setObjectName(QStringLiteral("comboCervezas"));
        comboCervezas->setGeometry(QRect(280, 110, 191, 24));
        label_2 = new QLabel(VentanaEnlazarEstiloCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 59, 16));
        label_4 = new QLabel(VentanaEnlazarEstiloCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 20, 181, 16));
        btnEnlazar = new QPushButton(VentanaEnlazarEstiloCerveza);
        btnEnlazar->setObjectName(QStringLiteral("btnEnlazar"));
        btnEnlazar->setGeometry(QRect(200, 150, 80, 24));
        label_3 = new QLabel(VentanaEnlazarEstiloCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 80, 59, 16));
        comboEstilos = new QComboBox(VentanaEnlazarEstiloCerveza);
        comboEstilos->setObjectName(QStringLiteral("comboEstilos"));
        comboEstilos->setGeometry(QRect(10, 110, 191, 24));

        retranslateUi(VentanaEnlazarEstiloCerveza);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaEnlazarEstiloCerveza, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaEnlazarEstiloCerveza, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaEnlazarEstiloCerveza);
    } // setupUi

    void retranslateUi(QDialog *VentanaEnlazarEstiloCerveza)
    {
        VentanaEnlazarEstiloCerveza->setWindowTitle(QApplication::translate("VentanaEnlazarEstiloCerveza", "Dialog", 0));
        label->setText(QApplication::translate("VentanaEnlazarEstiloCerveza", "<->", 0));
        label_2->setText(QApplication::translate("VentanaEnlazarEstiloCerveza", "Estilo", 0));
        label_4->setText(QApplication::translate("VentanaEnlazarEstiloCerveza", "ENLAZAR ESTILO - CERVEZA", 0));
        btnEnlazar->setText(QApplication::translate("VentanaEnlazarEstiloCerveza", "Enlazar", 0));
        label_3->setText(QApplication::translate("VentanaEnlazarEstiloCerveza", "Cerveza", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaEnlazarEstiloCerveza: public Ui_VentanaEnlazarEstiloCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAENLAZARESTILOCERVEZA_H
