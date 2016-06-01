#ifndef REGISTRARCERVEZA_H
#define REGISTRARCERVEZA_H

#include <QWidget>

namespace Ui {
class RegistrarCerveza;
}

class RegistrarCerveza : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrarCerveza(QWidget *parent = 0);
    ~RegistrarCerveza();

private slots:
    void on_btnatras_clicked();

private:
    Ui::RegistrarCerveza *ui;
};

#endif // REGISTRARCERVEZA_H
