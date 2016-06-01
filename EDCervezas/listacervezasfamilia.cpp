#include "listacervezasfamilia.h"
#include "ui_listacervezasfamilia.h"
#include "ventanaprincipal.h"

ListaCervezasFamilia::ListaCervezasFamilia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListaCervezasFamilia)
{
    ui->setupUi(this);
}

ListaCervezasFamilia::~ListaCervezasFamilia()
{
    delete ui;
}

void ListaCervezasFamilia::on_btnatras5_clicked()
{
    VentanaPrincipal * ListaCervezasFamilia = new VentanaPrincipal();
    ListaCervezasFamilia->show();
    close();
}
