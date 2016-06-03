/********************************************************************************
** Form generated from reading UI file 'buscarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARCERVEZA_H
#define UI_BUSCARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuscarCerveza
{
public:
    QPushButton *btnatras4;

    void setupUi(QWidget *BuscarCerveza)
    {
        if (BuscarCerveza->objectName().isEmpty())
            BuscarCerveza->setObjectName(QStringLiteral("BuscarCerveza"));
        BuscarCerveza->resize(400, 300);
        btnatras4 = new QPushButton(BuscarCerveza);
        btnatras4->setObjectName(QStringLiteral("btnatras4"));
        btnatras4->setGeometry(QRect(290, 250, 75, 23));

        retranslateUi(BuscarCerveza);

        QMetaObject::connectSlotsByName(BuscarCerveza);
    } // setupUi

    void retranslateUi(QWidget *BuscarCerveza)
    {
        BuscarCerveza->setWindowTitle(QApplication::translate("BuscarCerveza", "Form", 0));
        btnatras4->setText(QApplication::translate("BuscarCerveza", "atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class BuscarCerveza: public Ui_BuscarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARCERVEZA_H
