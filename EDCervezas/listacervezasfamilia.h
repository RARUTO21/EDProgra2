#ifndef LISTACERVEZASFAMILIA_H
#define LISTACERVEZASFAMILIA_H

#include <QWidget>

namespace Ui {
class ListaCervezasFamilia;
}

class ListaCervezasFamilia : public QWidget
{
    Q_OBJECT

public:
    explicit ListaCervezasFamilia(QWidget *parent = 0);
    ~ListaCervezasFamilia();

private slots:
    void on_btnatras5_clicked();

private:
    Ui::ListaCervezasFamilia *ui;
};

#endif // LISTACERVEZASFAMILIA_H
