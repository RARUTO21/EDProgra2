#include "solvedijkstra.h"
#include "ui_solvedijkstra.h"
#include "widget.h"

solveDijkstra::solveDijkstra(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solveDijkstra)
{
    ui->setupUi(this);
}

solveDijkstra::~solveDijkstra()
{
    delete ui;
}

void solveDijkstra::on_pushButton_clicked()
{
    Widget * solveDijkstra = new Widget();
    solveDijkstra->show();
    close();
}
