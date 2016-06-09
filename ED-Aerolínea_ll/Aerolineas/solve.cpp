#include "solve.h"
#include "ui_solve.h"
#include "widget.h"

solve::solve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solve)
{
    ui->setupUi(this);
}

solve::~solve()
{
    delete ui;
}

void solve::on_pushButton_clicked()
{
    //se importa las funcionalidades de floyd
}



void solve::on_btnatrassolve_clicked()
{
  Widget * solve = new Widget();
  solve->show();
  close();
}
