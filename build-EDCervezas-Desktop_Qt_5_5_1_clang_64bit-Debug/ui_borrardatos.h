/********************************************************************************
** Form generated from reading UI file 'borrardatos.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORRARDATOS_H
#define UI_BORRARDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrarDatos
{
public:
    QPushButton *btnatras6;
    QPushButton *btnguardar4;

    void setupUi(QWidget *BorrarDatos)
    {
        if (BorrarDatos->objectName().isEmpty())
            BorrarDatos->setObjectName(QStringLiteral("BorrarDatos"));
        BorrarDatos->resize(400, 300);
        btnatras6 = new QPushButton(BorrarDatos);
        btnatras6->setObjectName(QStringLiteral("btnatras6"));
        btnatras6->setGeometry(QRect(290, 250, 75, 23));
        btnguardar4 = new QPushButton(BorrarDatos);
        btnguardar4->setObjectName(QStringLiteral("btnguardar4"));
        btnguardar4->setGeometry(QRect(180, 250, 75, 23));

        retranslateUi(BorrarDatos);

        QMetaObject::connectSlotsByName(BorrarDatos);
    } // setupUi

    void retranslateUi(QWidget *BorrarDatos)
    {
        BorrarDatos->setWindowTitle(QApplication::translate("BorrarDatos", "Form", 0));
        btnatras6->setText(QApplication::translate("BorrarDatos", "atr\303\241s", 0));
        btnguardar4->setText(QApplication::translate("BorrarDatos", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class BorrarDatos: public Ui_BorrarDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORRARDATOS_H
