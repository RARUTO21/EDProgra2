#ifndef SOLVEKRUSKAL_H
#define SOLVEKRUSKAL_H

#include <QWidget>

namespace Ui {
class solveKruskal;
}

class solveKruskal : public QWidget
{
    Q_OBJECT

public:
    explicit solveKruskal(QWidget *parent = 0);
    ~solveKruskal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::solveKruskal *ui;
};

#endif // SOLVEKRUSKAL_H
