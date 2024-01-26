#ifndef MOSTRAR_SALDO_H
#define MOSTRAR_SALDO_H

#include <QDialog>

namespace Ui {
class mostrar_saldo;
}

class mostrar_saldo : public QDialog
{
    Q_OBJECT

public:
    explicit mostrar_saldo(QWidget *parent = 0);
    ~mostrar_saldo();

     void saldo(QString,float);

private:
    Ui::mostrar_saldo *ui;
};

#endif // MOSTRAR_SALDO_H
