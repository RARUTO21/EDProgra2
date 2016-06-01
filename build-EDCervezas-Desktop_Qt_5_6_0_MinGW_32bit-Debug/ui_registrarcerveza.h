/********************************************************************************
** Form generated from reading UI file 'registrarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARCERVEZA_H
#define UI_REGISTRARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrarCerveza
{
public:
    QPushButton *btnatras;

    void setupUi(QWidget *RegistrarCerveza)
    {
        if (RegistrarCerveza->objectName().isEmpty())
            RegistrarCerveza->setObjectName(QStringLiteral("RegistrarCerveza"));
        RegistrarCerveza->resize(576, 443);
        btnatras = new QPushButton(RegistrarCerveza);
        btnatras->setObjectName(QStringLiteral("btnatras"));
        btnatras->setGeometry(QRect(490, 400, 75, 23));

        retranslateUi(RegistrarCerveza);

        QMetaObject::connectSlotsByName(RegistrarCerveza);
    } // setupUi

    void retranslateUi(QWidget *RegistrarCerveza)
    {
        RegistrarCerveza->setWindowTitle(QApplication::translate("RegistrarCerveza", "Form", 0));
        btnatras->setText(QApplication::translate("RegistrarCerveza", "atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistrarCerveza: public Ui_RegistrarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARCERVEZA_H
