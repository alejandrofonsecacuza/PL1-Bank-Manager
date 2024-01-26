#include "form_intalacion.h"
#include "ui_form_intalacion.h"
#include <QMessageBox>

#include"mainwindow.h"
#include "form_instalacion_dos.h"

Form_Intalacion::Form_Intalacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_Intalacion)
{
    ui->setupUi(this);

}

Form_Intalacion::~Form_Intalacion()
{
    delete ui;
}

void Form_Intalacion::on_pushButton_clicked()
{
 Form_instalacion_dos *m=new Form_instalacion_dos(0);
   m->show();
    this->setVisible(false);
}

void Form_Intalacion::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Información del Programa.","Autor: Alejandro Fonseca Cuza. \n Version: 1.0 \n Gestor de Cuentas Bancarias"
                                                              ".");
}

void Form_Intalacion::on_pushButton_2_clicked()
{
    close();
}
