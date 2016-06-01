#ifndef BORRARDATOS_H
#define BORRARDATOS_H

#include <QWidget>

namespace Ui {
class BorrarDatos;
}

class BorrarDatos : public QWidget
{
    Q_OBJECT

public:
    explicit BorrarDatos(QWidget *parent = 0);
    ~BorrarDatos();

private slots:
    void on_btnatras6_clicked();

private:
    Ui::BorrarDatos *ui;
};

#endif // BORRARDATOS_H
