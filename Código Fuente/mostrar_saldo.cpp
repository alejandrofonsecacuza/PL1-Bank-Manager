#include "mostrar_saldo.h"
#include "ui_mostrar_saldo.h"

mostrar_saldo::mostrar_saldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrar_saldo)
{
    ui->setupUi(this);
}

mostrar_saldo::~mostrar_saldo()
{
    delete ui;
}

void mostrar_saldo::saldo(QString cuenta,float saldo){
    ui->lineEdit->setText(QString::number(saldo)+"$");
    ui->label->setText("Saldo de la : #"+cuenta);


}
