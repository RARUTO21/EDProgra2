#ifndef REGISTRARFAMILIACERVEZA_H
#define REGISTRARFAMILIACERVEZA_H

#include <QWidget>

namespace Ui {
class RegistrarFamiliaCerveza;
}

class RegistrarFamiliaCerveza : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrarFamiliaCerveza(QWidget *parent = 0);
    ~RegistrarFamiliaCerveza();

private slots:
    void on_btnatras2_clicked();

private:
    Ui::RegistrarFamiliaCerveza *ui;
};

#endif // REGISTRARFAMILIACERVEZA_H
