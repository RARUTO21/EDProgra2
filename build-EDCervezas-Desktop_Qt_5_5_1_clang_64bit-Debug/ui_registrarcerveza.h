/********************************************************************************
** Form generated from reading UI file 'registrarcerveza.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARCERVEZA_H
#define UI_REGISTRARCERVEZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrarCerveza
{
public:
    QPushButton *btnatras;
    QPushButton *btnguardar1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBoxFamilia;
    QComboBox *comboBoxEstilo;
    QLineEdit *lineNombre;
    QLineEdit *lineTipoFermentacion;
    QLineEdit *lineTiempoFermentacion;
    QLineEdit *lineTemperatura;
    QLineEdit *lineColor;
    QLineEdit *lineCuerpo;
    QLineEdit *linePrecio;
    QTextEdit *textCaracteristicas;

    void setupUi(QWidget *RegistrarCerveza)
    {
        if (RegistrarCerveza->objectName().isEmpty())
            RegistrarCerveza->setObjectName(QStringLiteral("RegistrarCerveza"));
        RegistrarCerveza->resize(576, 443);
        RegistrarCerveza->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127);"));
        btnatras = new QPushButton(RegistrarCerveza);
        btnatras->setObjectName(QStringLiteral("btnatras"));
        btnatras->setGeometry(QRect(490, 400, 75, 23));
        btnguardar1 = new QPushButton(RegistrarCerveza);
        btnguardar1->setObjectName(QStringLiteral("btnguardar1"));
        btnguardar1->setGeometry(QRect(370, 400, 75, 23));
        label = new QLabel(RegistrarCerveza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 41, 21));
        label_2 = new QLabel(RegistrarCerveza);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 30, 41, 21));
        label_3 = new QLabel(RegistrarCerveza);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 41, 21));
        label_4 = new QLabel(RegistrarCerveza);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 250, 81, 21));
        label_5 = new QLabel(RegistrarCerveza);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 170, 111, 16));
        label_6 = new QLabel(RegistrarCerveza);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 121, 31));
        label_7 = new QLabel(RegistrarCerveza);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 130, 71, 21));
        label_8 = new QLabel(RegistrarCerveza);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 170, 41, 21));
        label_9 = new QLabel(RegistrarCerveza);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(320, 210, 47, 13));
        label_10 = new QLabel(RegistrarCerveza);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(320, 250, 47, 13));
        comboBoxFamilia = new QComboBox(RegistrarCerveza);
        comboBoxFamilia->setObjectName(QStringLiteral("comboBoxFamilia"));
        comboBoxFamilia->setGeometry(QRect(110, 30, 69, 22));
        comboBoxEstilo = new QComboBox(RegistrarCerveza);
        comboBoxEstilo->setObjectName(QStringLiteral("comboBoxEstilo"));
        comboBoxEstilo->setGeometry(QRect(360, 30, 69, 22));
        lineNombre = new QLineEdit(RegistrarCerveza);
        lineNombre->setObjectName(QStringLiteral("lineNombre"));
        lineNombre->setGeometry(QRect(150, 130, 121, 20));
        lineTipoFermentacion = new QLineEdit(RegistrarCerveza);
        lineTipoFermentacion->setObjectName(QStringLiteral("lineTipoFermentacion"));
        lineTipoFermentacion->setGeometry(QRect(150, 170, 121, 20));
        lineTiempoFermentacion = new QLineEdit(RegistrarCerveza);
        lineTiempoFermentacion->setObjectName(QStringLiteral("lineTiempoFermentacion"));
        lineTiempoFermentacion->setGeometry(QRect(150, 210, 121, 20));
        lineTemperatura = new QLineEdit(RegistrarCerveza);
        lineTemperatura->setObjectName(QStringLiteral("lineTemperatura"));
        lineTemperatura->setGeometry(QRect(390, 130, 113, 20));
        lineColor = new QLineEdit(RegistrarCerveza);
        lineColor->setObjectName(QStringLiteral("lineColor"));
        lineColor->setGeometry(QRect(390, 170, 113, 20));
        lineCuerpo = new QLineEdit(RegistrarCerveza);
        lineCuerpo->setObjectName(QStringLiteral("lineCuerpo"));
        lineCuerpo->setGeometry(QRect(390, 210, 113, 20));
        linePrecio = new QLineEdit(RegistrarCerveza);
        linePrecio->setObjectName(QStringLiteral("linePrecio"));
        linePrecio->setGeometry(QRect(390, 250, 113, 20));
        textCaracteristicas = new QTextEdit(RegistrarCerveza);
        textCaracteristicas->setObjectName(QStringLiteral("textCaracteristicas"));
        textCaracteristicas->setGeometry(QRect(150, 250, 121, 71));

        retranslateUi(RegistrarCerveza);

        QMetaObject::connectSlotsByName(RegistrarCerveza);
    } // setupUi

    void retranslateUi(QWidget *RegistrarCerveza)
    {
        RegistrarCerveza->setWindowTitle(QApplication::translate("RegistrarCerveza", "Form", 0));
        btnatras->setText(QApplication::translate("RegistrarCerveza", "atr\303\241s", 0));
        btnguardar1->setText(QApplication::translate("RegistrarCerveza", "guardar", 0));
        label->setText(QApplication::translate("RegistrarCerveza", "Familia:", 0));
        label_2->setText(QApplication::translate("RegistrarCerveza", "Estilo:", 0));
        label_3->setText(QApplication::translate("RegistrarCerveza", "Nombre:", 0));
        label_4->setText(QApplication::translate("RegistrarCerveza", "Caracter\303\255sticas:", 0));
        label_5->setText(QApplication::translate("RegistrarCerveza", "Tipo de fermentaci\303\263n:", 0));
        label_6->setText(QApplication::translate("RegistrarCerveza", "Tiempo de fermentaci\303\263n:", 0));
        label_7->setText(QApplication::translate("RegistrarCerveza", "Temperatura:", 0));
        label_8->setText(QApplication::translate("RegistrarCerveza", "Color:", 0));
        label_9->setText(QApplication::translate("RegistrarCerveza", "Cuerpo:", 0));
        label_10->setText(QApplication::translate("RegistrarCerveza", "Precio:", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistrarCerveza: public Ui_RegistrarCerveza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARCERVEZA_H
