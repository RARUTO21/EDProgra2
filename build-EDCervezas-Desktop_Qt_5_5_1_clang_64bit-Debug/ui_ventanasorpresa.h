/********************************************************************************
** Form generated from reading UI file 'ventanasorpresa.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANASORPRESA_H
#define UI_VENTANASORPRESA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_VentanaSorpresa
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *VentanaSorpresa)
    {
        if (VentanaSorpresa->objectName().isEmpty())
            VentanaSorpresa->setObjectName(QStringLiteral("VentanaSorpresa"));
        VentanaSorpresa->resize(640, 480);
        buttonBox = new QDialogButtonBox(VentanaSorpresa);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(VentanaSorpresa);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 120, 181, 31));

        retranslateUi(VentanaSorpresa);
        QObject::connect(buttonBox, SIGNAL(accepted()), VentanaSorpresa, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VentanaSorpresa, SLOT(reject()));

        QMetaObject::connectSlotsByName(VentanaSorpresa);
    } // setupUi

    void retranslateUi(QDialog *VentanaSorpresa)
    {
        VentanaSorpresa->setWindowTitle(QApplication::translate("VentanaSorpresa", "Dialog", 0));
        label->setText(QApplication::translate("VentanaSorpresa", "HELLO WORLD!", 0));
    } // retranslateUi

};

namespace Ui {
    class VentanaSorpresa: public Ui_VentanaSorpresa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANASORPRESA_H
