#include "listacervezas.h"
#include "ui_listacervezas.h"

ListaCervezas::ListaCervezas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaCervezas)
{
    ui->setupUi(this);
}

ListaCervezas::~ListaCervezas()
{
    delete ui;
}
