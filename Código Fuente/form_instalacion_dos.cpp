#include "form_instalacion_dos.h"
#include "ui_form_instalacion_dos.h"
#include "form_intalacion.h"
#include "mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>

Form_instalacion_dos::Form_instalacion_dos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_instalacion_dos)
{
    ui->setupUi(this);
    ui->progressBar->setVisible(false);
}

Form_instalacion_dos::~Form_instalacion_dos()
{
    delete ui;
}

void Form_instalacion_dos::on_pushButton_clicked()
{
      MainWindow *w = new MainWindow(0);
   ui->progressBar->setVisible(true);
   for(int j=1;j<=100;j++){
   for(int i=1;i<=3000000;i++)
    ui->progressBar->setValue(j);

}
           this->setVisible(false);
           w->show();

           QFile ruta;
           QTextStream io2;

           ruta.setFileName("./Cache.txt");
           ruta.open(QIODevice::ReadWrite | QIODevice::Text);
           io2.setDevice(&ruta);
           io2<<"1";
           ruta.flush();
           ruta.close();


}

void Form_instalacion_dos::on_checkBox_toggled(bool checked)
{
    if(checked)
    ui->pushButton->setEnabled(true);
    else
    ui->pushButton->setEnabled(false);
}

void Form_instalacion_dos::on_pushButton_2_clicked()
{

    Form_Intalacion *f=new Form_Intalacion(0);
    this->setVisible(false);
    f->show();

}


