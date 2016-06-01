#ifndef LISTACERVEZAS_H
#define LISTACERVEZAS_H

#include <QWidget>

namespace Ui {
class ListaCervezas;
}

class ListaCervezas : public QWidget
{
    Q_OBJECT

public:
    explicit ListaCervezas(QWidget *parent = 0);
    ~ListaCervezas();

private:
    Ui::ListaCervezas *ui;
};

#endif // LISTACERVEZAS_H
