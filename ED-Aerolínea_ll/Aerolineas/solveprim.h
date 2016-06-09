#ifndef SOLVEPRIM_H
#define SOLVEPRIM_H

#include <QWidget>

namespace Ui {
class solvePrim;
}

class solvePrim : public QWidget
{
    Q_OBJECT

public:
    explicit solvePrim(QWidget *parent = 0);
    ~solvePrim();

private slots:
    void on_pushButtonatras_clicked();

private:
    Ui::solvePrim *ui;
};

#endif // SOLVEPRIM_H
