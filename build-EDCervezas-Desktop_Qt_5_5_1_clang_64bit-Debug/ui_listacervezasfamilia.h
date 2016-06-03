/********************************************************************************
** Form generated from reading UI file 'listacervezasfamilia.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTACERVEZASFAMILIA_H
#define UI_LISTACERVEZASFAMILIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaCervezasFamilia
{
public:
    QPushButton *btnatras5;

    void setupUi(QWidget *ListaCervezasFamilia)
    {
        if (ListaCervezasFamilia->objectName().isEmpty())
            ListaCervezasFamilia->setObjectName(QStringLiteral("ListaCervezasFamilia"));
        ListaCervezasFamilia->resize(400, 300);
        btnatras5 = new QPushButton(ListaCervezasFamilia);
        btnatras5->setObjectName(QStringLiteral("btnatras5"));
        btnatras5->setGeometry(QRect(300, 240, 75, 23));

        retranslateUi(ListaCervezasFamilia);

        QMetaObject::connectSlotsByName(ListaCervezasFamilia);
    } // setupUi

    void retranslateUi(QWidget *ListaCervezasFamilia)
    {
        ListaCervezasFamilia->setWindowTitle(QApplication::translate("ListaCervezasFamilia", "Form", 0));
        btnatras5->setText(QApplication::translate("ListaCervezasFamilia", "atr\303\241s", 0));
    } // retranslateUi

};

namespace Ui {
    class ListaCervezasFamilia: public Ui_ListaCervezasFamilia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTACERVEZASFAMILIA_H
