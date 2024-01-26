#include "mostrar_informacion.h"
#include "ui_mostrar_informacion.h"
#include<QDebug>
#include<QDate>


Mostrar_informacion::Mostrar_informacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Mostrar_informacion)
{
    ui->setupUi(this);
}

Mostrar_informacion::~Mostrar_informacion()
{
    delete ui;
}

 void Mostrar_informacion::pasar_informacion(QString cuenta,QString nombre,QString id, float saldo, int interes ,QDate fecha){


    ui->label_mostrar->setText("Información de la cuenta : #"+cuenta);
    ui->lineEdit->setText(nombre);
    ui->lineEdit_2->setText(id);
    ui->doubleSpinBox->setValue(saldo);
    ui->spinBox->setValue(interes);
    ui->calendarWidget->setSelectedDate(fecha);


}

void Mostrar_informacion::on_pushButton_2_clicked()
{
    close();
}
