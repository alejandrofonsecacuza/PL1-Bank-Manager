#ifndef MOSTRAR_INFORMACION_H
#define MOSTRAR_INFORMACION_H

#include <QDialog>

namespace Ui {
class Mostrar_informacion;
}

class Mostrar_informacion : public QDialog
{
    Q_OBJECT

public:
    explicit Mostrar_informacion(QWidget *parent = 0);
    ~Mostrar_informacion();
     void pasar_informacion(QString cuenta,QString nombre,QString id, float saldo, int interes ,QDate fecha);

private slots:
     void on_pushButton_2_clicked();

private:
    Ui::Mostrar_informacion *ui;
};

#endif // MOSTRAR_INFORMACION_H
