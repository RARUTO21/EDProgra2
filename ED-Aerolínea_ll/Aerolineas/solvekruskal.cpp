#include "solvekruskal.h"
#include "ui_solvekruskal.h"
#include "widget.h"

solveKruskal::solveKruskal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solveKruskal)
{
    ui->setupUi(this);
}

solveKruskal::~solveKruskal()
{
    delete ui;
}

void solveKruskal::on_pushButton_clicked()
{
    Widget * solveKruskal = new Widget();
    solveKruskal->show();
    close();
}
