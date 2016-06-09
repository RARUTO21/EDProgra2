#include "solveprim.h"
#include "ui_solveprim.h"
#include "widget.h"

solvePrim::solvePrim(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solvePrim)
{
    ui->setupUi(this);
}

solvePrim::~solvePrim()
{
    delete ui;
}

void solvePrim::on_pushButtonatras_clicked()
{
    Widget * solvePrim = new Widget();
    solvePrim->show();
    close();
}
