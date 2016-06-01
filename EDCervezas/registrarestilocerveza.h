#ifndef REGISTRARESTILOCERVEZA_H
#define REGISTRARESTILOCERVEZA_H

#include <QWidget>

namespace Ui {
class RegistrarEstiloCerveza;
}

class RegistrarEstiloCerveza : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrarEstiloCerveza(QWidget *parent = 0);
    ~RegistrarEstiloCerveza();

private slots:
    void on_btnatras3_clicked();

private:
    Ui::RegistrarEstiloCerveza *ui;
};

#endif // REGISTRARESTILOCERVEZA_H
