#ifndef BUSCARCERVEZA_H
#define BUSCARCERVEZA_H

#include <QWidget>

namespace Ui {
class BuscarCerveza;
}

class BuscarCerveza : public QWidget
{
    Q_OBJECT

public:
    explicit BuscarCerveza(QWidget *parent = 0);
    ~BuscarCerveza();

private slots:
    void on_btnatras4_clicked();

private:
    Ui::BuscarCerveza *ui;
};

#endif // BUSCARCERVEZA_H
