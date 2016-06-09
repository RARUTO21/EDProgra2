#ifndef SOLVE_H
#define SOLVE_H

#include <QWidget>

namespace Ui {
class solve;
}

class solve : public QWidget
{
    Q_OBJECT

public:
    explicit solve(QWidget *parent = 0);
    ~solve();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnatrassolve_clicked();

private:
    Ui::solve *ui;
};

#endif // SOLVE_H
