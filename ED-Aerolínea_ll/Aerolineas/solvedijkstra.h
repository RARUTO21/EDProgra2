#ifndef SOLVEDIJKSTRA_H
#define SOLVEDIJKSTRA_H

#include <QWidget>

namespace Ui {
class solveDijkstra;
}

class solveDijkstra : public QWidget
{
    Q_OBJECT

public:
    explicit solveDijkstra(QWidget *parent = 0);
    ~solveDijkstra();

private slots:
    void on_pushButton_clicked();

private:
    Ui::solveDijkstra *ui;
};

#endif // SOLVEDIJKSTRA_H
