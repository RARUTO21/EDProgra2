/********************************************************************************
** Form generated from reading UI file 'registrarestilocerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARESTILOCERVEZA_H
#define UI_REGISTRARESTILOCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrarEstiloCerveza
{
public:
    QPushButton *btnatras3;

    void setupUi(QWidget *RegistrarEstiloCerveza)
    {
        if (RegistrarEstiloCerveza->objectName().isEmpty())
            RegistrarEstiloCerveza->setObjectName(QStringLiteral("RegistrarEstiloCerveza"));
        RegistrarEstiloCerveza->resize(400, 163);
        btnatras3 = new QPushButton(RegistrarEstiloCerveza);
        btnatras3->setObjectName(QStringLiteral("btnatras3"));
        btnatras3->setGeometry(QRect(300, 120, 75, 23));

        retranslateUi(RegistrarEstiloCerveza);

        QMetaObject::connectSlotsByName(RegistrarEstiloCerveza);
    } // setupUi

    void retranslateUi(QWidget *RegistrarEstiloCerveza)
    {
        RegistrarEstiloCerveza->setWindowTitle(QApplication::translate("RegistrarEstiloCerveza", "Form", 0));
        btnatras3->setText(QApplication::translate("RegistrarEstiloCerveza", "atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistrarEstiloCerveza: public Ui_RegistrarEstiloCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARESTILOCERVEZA_H
