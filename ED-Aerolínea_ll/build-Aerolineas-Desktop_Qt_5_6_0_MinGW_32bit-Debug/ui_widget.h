/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *tab;
    QTableView *tableWidgetA;
    QLabel *label;
    QSpinBox *NumeroDeFilasSpinBoxA;
    QPushButton *btnPrepararTabla;
    QPushButton *btnInsertarRegistro;
    QPushButton *btnBorrarSeleccion;
    QPushButton *btnBorrarTodo;
    QTableWidget *MatrizAdyacencia;
    QLineEdit *lineEditCiudad;
    QPushButton *pushButtonAgregar;
    QPushButton *btnFloyd;
    QPushButton *btnDijkstra;
    QPushButton *btnPrim;
    QPushButton *btnKruskal;
    QWidget *tab_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(738, 493);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 721, 481));
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 127);"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 200, 331, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 40, 231, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8("images.png")));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidgetA = new QTableView(tab);
        tableWidgetA->setObjectName(QStringLiteral("tableWidgetA"));
        tableWidgetA->setGeometry(QRect(120, 20, 411, 221));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 260, 101, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        NumeroDeFilasSpinBoxA = new QSpinBox(tab);
        NumeroDeFilasSpinBoxA->setObjectName(QStringLiteral("NumeroDeFilasSpinBoxA"));
        NumeroDeFilasSpinBoxA->setGeometry(QRect(330, 260, 42, 22));
        btnPrepararTabla = new QPushButton(tab);
        btnPrepararTabla->setObjectName(QStringLiteral("btnPrepararTabla"));
        btnPrepararTabla->setGeometry(QRect(554, 80, 101, 23));
        btnInsertarRegistro = new QPushButton(tab);
        btnInsertarRegistro->setObjectName(QStringLiteral("btnInsertarRegistro"));
        btnInsertarRegistro->setGeometry(QRect(554, 110, 101, 23));
        btnBorrarSeleccion = new QPushButton(tab);
        btnBorrarSeleccion->setObjectName(QStringLiteral("btnBorrarSeleccion"));
        btnBorrarSeleccion->setGeometry(QRect(554, 140, 101, 23));
        btnBorrarTodo = new QPushButton(tab);
        btnBorrarTodo->setObjectName(QStringLiteral("btnBorrarTodo"));
        btnBorrarTodo->setGeometry(QRect(554, 170, 101, 23));
        MatrizAdyacencia = new QTableWidget(tab);
        MatrizAdyacencia->setObjectName(QStringLiteral("MatrizAdyacencia"));
        MatrizAdyacencia->setGeometry(QRect(10, 20, 111, 221));
        lineEditCiudad = new QLineEdit(tab);
        lineEditCiudad->setObjectName(QStringLiteral("lineEditCiudad"));
        lineEditCiudad->setGeometry(QRect(10, 250, 113, 20));
        pushButtonAgregar = new QPushButton(tab);
        pushButtonAgregar->setObjectName(QStringLiteral("pushButtonAgregar"));
        pushButtonAgregar->setGeometry(QRect(30, 280, 75, 23));
        btnFloyd = new QPushButton(tab);
        btnFloyd->setObjectName(QStringLiteral("btnFloyd"));
        btnFloyd->setGeometry(QRect(170, 370, 75, 23));
        btnDijkstra = new QPushButton(tab);
        btnDijkstra->setObjectName(QStringLiteral("btnDijkstra"));
        btnDijkstra->setGeometry(QRect(250, 370, 75, 23));
        btnPrim = new QPushButton(tab);
        btnPrim->setObjectName(QStringLiteral("btnPrim"));
        btnPrim->setGeometry(QRect(330, 370, 75, 23));
        btnKruskal = new QPushButton(tab);
        btnKruskal->setObjectName(QStringLiteral("btnKruskal"));
        btnKruskal->setGeometry(QRect(410, 370, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_2->setText(QApplication::translate("Widget", "Sistema de viajes ", 0));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "Aerol\303\255nea", 0));
        label->setText(QApplication::translate("Widget", "Tama\303\261o matriz", 0));
        btnPrepararTabla->setText(QApplication::translate("Widget", "Preparar tabla", 0));
        btnInsertarRegistro->setText(QApplication::translate("Widget", "Insertar Ciudad", 0));
        btnBorrarSeleccion->setText(QApplication::translate("Widget", "Borrar selecci\303\263n", 0));
        btnBorrarTodo->setText(QApplication::translate("Widget", "Borrar Todo", 0));
        pushButtonAgregar->setText(QApplication::translate("Widget", "Registrar", 0));
        btnFloyd->setText(QApplication::translate("Widget", "Floyd", 0));
        btnDijkstra->setText(QApplication::translate("Widget", "Dijkstra", 0));
        btnPrim->setText(QApplication::translate("Widget", "Prim", 0));
        btnKruskal->setText(QApplication::translate("Widget", "Kruskal", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "MatrizAdyacencia", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Grafo", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
