/********************************************************************************
** Form generated from reading UI file 'registrarfamiliacerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARFAMILIACERVEZA_H
#define UI_REGISTRARFAMILIACERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrarFamiliaCerveza
{
public:
    QPushButton *btnatras2;
    QPushButton *btnguardar2;

    void setupUi(QWidget *RegistrarFamiliaCerveza)
    {
        if (RegistrarFamiliaCerveza->objectName().isEmpty())
            RegistrarFamiliaCerveza->setObjectName(QStringLiteral("RegistrarFamiliaCerveza"));
        RegistrarFamiliaCerveza->resize(509, 189);
        btnatras2 = new QPushButton(RegistrarFamiliaCerveza);
        btnatras2->setObjectName(QStringLiteral("btnatras2"));
        btnatras2->setGeometry(QRect(410, 150, 75, 23));
        btnguardar2 = new QPushButton(RegistrarFamiliaCerveza);
        btnguardar2->setObjectName(QStringLiteral("btnguardar2"));
        btnguardar2->setGeometry(QRect(290, 150, 75, 23));

        retranslateUi(RegistrarFamiliaCerveza);

        QMetaObject::connectSlotsByName(RegistrarFamiliaCerveza);
    } // setupUi

    void retranslateUi(QWidget *RegistrarFamiliaCerveza)
    {
        RegistrarFamiliaCerveza->setWindowTitle(QApplication::translate("RegistrarFamiliaCerveza", "Form", 0));
        btnatras2->setText(QApplication::translate("RegistrarFamiliaCerveza", "atr\303\241s", 0));
        btnguardar2->setText(QApplication::translate("RegistrarFamiliaCerveza", "guardar", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistrarFamiliaCerveza: public Ui_RegistrarFamiliaCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARFAMILIACERVEZA_H
