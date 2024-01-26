#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
#include<QDate>
#include<QLinkedList>
#include<iostream>
#include"mostrar_informacion.h"
#include"mostrar_saldo.h"
#include"cuentas.h"
#include"operaciones.h"
#include"banco.h"




using namespace std;
Banco new_banco=Banco();
int identificador=100001;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    ui->boton_manito_derecha->setVisible(false);
    ui->pila->setVisible(false);
    ui->frame_inferior_centro->setVisible(false);
    this->setMaximumSize(600,800);


}








MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::click(int i,QString s)
{
    ui->Texto_identificacion_pagina->setText(s);
    ui->pila->setCurrentIndex(i);
    ui->pila->setVisible(true);
    ui->frame_inferior_centro->setVisible(true);

    this->setMaximumSize(1200,750);
    this->setGeometry(0,0,1200,700);
}
bool MainWindow::validar_uno(QString numero_cuenta,QString carnet_identidad){
    bool ok, ok2;




    long long carnet=carnet_identidad.toLongLong(&ok2);
    if(!ok2){
         QMessageBox::critical(this,"Información de Crear Cuenta. ","El carnet de identidad no es válido.");
    return false;
    }
    if(carnet_identidad.length()!=11){
        QMessageBox::critical(this,"Información de Crear Cuenta. ","El carnet de identidad no tiene los 11 dígitos.");
    return false;
    }
    long long numero=numero_cuenta.toLongLong(&ok);
    if(!ok){
         QMessageBox::critical(this,"Información de Crear Cuenta. ","El numero de cuenta no es válido.");
    return false;
    }




    return true;

}
bool MainWindow::validor_dos(QString nombre,QString carnet_identidad){
    bool ok, ok2 ;

    //comprobando que lo que escribio en el nombre no fue un número
    int name_prueba = nombre.toInt(&ok);
    if(ok){
        QMessageBox::critical(this,"Información de Crear Cuenta. ","El Nombre no es válido.");
        return false;
        }

    //comprobando que escribio algo en el campo nombre
    if(!nombre.length()){
        QMessageBox::critical(this,"Información de Crear Cuenta. ","Escriba el nombre.");
         return false;
        }



    //comprobando que el carnet está compuesto por dígitos.
    long long carnet=carnet_identidad.toLongLong(&ok2);

    if(!ok2){
         QMessageBox::critical(this,"Información de Crear Cuenta. ","El carnet de identidad no es válido.");
        return false;
    }

    //comprobando que el carnet de identidad tiene 11 dígitos
    if(carnet_identidad.length()!=11){
        QMessageBox::critical(this,"Información de Crear Cuenta. ","El carnet de identidad no tiene los 11 dígitos.");
        return false;
    }





    return true;

}

void MainWindow::on_pushButton_3_clicked()
{
   click(2,"Mostrar Saldo.");

}

void MainWindow::on_pushButton_4_clicked()
{
   click(0,"Crear Cuenta.");
    QDate hoy=QDate::currentDate();
    ui->uno_dateEdit->setMaximumDate(hoy);
   ui->label_identi->setText("#"+QString::number(identificador));

}

void MainWindow::on_boton_manito_isquierda_clicked()
{
    ui->frame_inferior_isquierdo->setVisible(false);
    ui->boton_manito_derecha->setVisible(true);
    ui->boton_manito_isquierda->setVisible(false);
    ui->boton_manito_derecha_2->setVisible(false);

}

void MainWindow::on_boton_manito_derecha_clicked()
{
    ui->boton_manito_derecha->setVisible(false);
    ui->frame_inferior_isquierdo->setVisible(true);
    ui->boton_manito_isquierda->setVisible(true);
        ui->boton_manito_derecha_2->setVisible(true);


}

void MainWindow::on_boton_manito_derecha_2_clicked()
{
    ui->frame_inferior_centro->setVisible(false);
    this->setMaximumSize(600,600);
}

void MainWindow::on_pushButton_5_clicked()
{
   click(1,"Cerrar Cuenta.");
}

void MainWindow::on_pushButton_6_clicked()
{
   click(3,"Actualizar Saldo.");
}

void MainWindow::on_pushButton_9_clicked()
{
   click(4,"Depositar Saldo.");
}

void MainWindow::on_pushButton_8_clicked()
{
   click(5,"Extraer Saldo.");
}

void MainWindow::on_pushButton_7_clicked()
{
     click(6,"Mostrar Datos.");


}

void MainWindow::on_pushButton_10_clicked()
{
    click(7,"Transaciones.");


       ui->tableWidget->setRowCount(0);


    ui->tableWidget_2->setRowCount(0);


QDate fecha_mayor=QDate(0,0,0);
   QList<Operaciones> L_last_month=new_banco.mostrar_transaciones(fecha_mayor);
   qDebug()<<fecha_mayor;
   qDebug()<<L_last_month.size();
    for(auto i:L_last_month){
    if(i.get_fecha().month()==fecha_mayor.month() && i.get_fecha().year()==fecha_mayor.year())
        switch (i.get_identificador()) {
        case 1:{
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem("# "+QString::number(i.get_numero_de_cuenta())));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,new QTableWidgetItem(i.get_user()));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(i.get_saldo_anterior())+"$"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,new QTableWidgetItem(QString::number(i.get_saldo_operacion())+"$"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4,new QTableWidgetItem(QString::number(i.get_saldo_resultante())+"$"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,5,new QTableWidgetItem((i.get_fecha()).toString()));


            break;
            }

        case 2:{


            ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,0,new QTableWidgetItem("# "+QString::number(i.get_numero_de_cuenta())));
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,1,new QTableWidgetItem(i.get_user()));
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,2,new QTableWidgetItem(QString::number(i.get_saldo_anterior())+"$"));
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,3,new QTableWidgetItem(QString::number(i.get_saldo_operacion())+"$"));
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,4,new QTableWidgetItem(QString::number(i.get_saldo_resultante())+"$"));
            ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,5,new QTableWidgetItem((i.get_fecha()).toString()));

            break;
            }
        default:{


            break;
        }
    }

    }



}

void MainWindow::on_pushButton_clicked()
{
    //Sacando los datos del formulario

    QString name=ui->uno_lineEdit->text();
    QString ci=ui->uno_lineEdit_2->text();
    float saldo=ui->uno_doubleSpinBox->value();
    int interes=ui->uno_spinBox->value();
    QDate fecha=ui->uno_dateEdit->date();

    //Preguntando si los datos están correctos
    bool ok =validor_dos(name,ci);
    //En el caso que no lo esten salirse
    if(!ok)
        return;

    for(int i=0;i<name.length();i++){
      if(name.at(i).isDigit()){
          QMessageBox::critical(this,"Información de Crear Cuenta. ","El Nombre no es válido.");
          return;


      }

    }


    //Limpiar Datos
    QDate fecha_inicializar=QDate(2000,1,1);;

    ui->uno_lineEdit->setText("");
    ui->uno_lineEdit_2->setText("");
    ui->uno_spinBox->setValue(0);
    ui->uno_doubleSpinBox->setValue(0);
    ui->uno_dateEdit->setDate(fecha_inicializar);


    Cuentas new_cuenta=Cuentas(identificador,name,ci,fecha,saldo,interes);

    if(new_banco.crear_cuenta(new_cuenta)){
        QMessageBox::information(this,"Información de Crear Cuenta. ","¡Cuenta actualizada!.");
    }else{
        QMessageBox::information(this,"Información de  Cuenta. ","¡Cuenta creada!.");

    }
  identificador++;
  ui->label_identi->setText("#"+QString::number(identificador));
}




void MainWindow::on_pushButton_2_clicked()
{
   QString carnet= ui->dos_lineEdit_1->text();
   QString numero= ui->dos_lineEdit_2->text();

   bool ok =validar_uno(numero,carnet);
   if(!ok)
       return;


   ui->dos_lineEdit_1->setText("");
   ui->dos_lineEdit_2->setText("");

   int index=0;
 if (new_banco.buscar_en_cuenta(numero,carnet,index)) {
     new_banco.eliminar_cuenta(index);
      QMessageBox::information(this,"Información de Borrar Cuenta. ","¡Cuenta cerrada!.");
 } else {
     QMessageBox::critical(this,"Información de  Cuenta. ","¡La Cuenta no existe!.");
 }

}

void MainWindow::on_pushButton_11_clicked()
{
    QString carnet= ui->tres_lineEdit_carnet->text();
    QString numero= ui->tres_lineEdit_cuentas->text();

    bool ok =validar_uno(numero,carnet);
    if(!ok)
        return;


    ui->tres_lineEdit_carnet->setText("");
    ui->tres_lineEdit_cuentas->setText("");

    int index=0;
  if (new_banco.buscar_en_cuenta(numero,carnet,index)) {
        new_banco.saldo_actual(index,numero);
  } else {
      QMessageBox::critical(this,"Información de Cuenta. ","¡La Cuenta no existe!.");
  }
}

void MainWindow::on_pushButton_12_clicked()
{

    QString carnet= ui->cuatro_lineEdit_carnet->text();
    QString numero= ui->cuatro_lineEdit_cuenta->text();

    bool ok =validar_uno(numero,carnet);
    if(!ok)
        return;


    ui->cuatro_lineEdit_carnet->setText("");
    ui->cuatro_lineEdit_cuenta->setText("");

    int index=0;
  if (new_banco.buscar_en_cuenta(numero,carnet,index)) {
        new_banco.actualizar_saldo(index);
       QMessageBox::information(this,"Información del saldo. ","¡El Saldo de la cuenta : "+numero+" se actualizó,consulte su saldo!.");
  } else {
      QMessageBox::critical(this,"Información de  Cuenta. ","¡La Cuenta no existe!.");
  }
}

void MainWindow::on_pushButton_13_clicked()
{
    QString carnet= ui->cinco_lineEdit_carnet->text();
    QString numero= ui->cinco_lineEdit_cuenta->text();
    float saldo_depositado = ui->cinco_doubleSpinBox_deposito->value();
    QDate fecha=ui->cinco_dateEdit->date();

    if(!validar_uno(numero,carnet))
        return;




    ui->cinco_lineEdit_carnet->setText("");
    ui->cinco_lineEdit_cuenta->setText("");
    ui->cinco_doubleSpinBox_deposito->setValue(0);

    int index=0;
  if (new_banco.buscar_en_cuenta(numero,carnet,index)) {
     if(new_banco.depositar_dinero(index,saldo_depositado,fecha,1)){
         QMessageBox::information(this,"Información del saldo. ","¡El Saldo de la cuenta : "+numero+" se actualizó,consulte su saldo!.");

     }
     else{
     QMessageBox::critical(this,"Información del saldo. ","¡La Fecha de Deposito es antes que la fecha de creación de la cuenta.!");
     }

        }
  else {
      QMessageBox::critical(this,"Información de  Cuenta. ","¡La Cuenta no existe!.");
  }

}

void MainWindow::on_pushButton_14_clicked()
{
    QString carnet= ui->seis_lineEdit_carnet->text();
    QString numero= ui->seis_lineEdit_cuenta->text();
    float saldo_extraido = ui->seis_lineEdit_extraido->value();
    QDate fecha=ui->seis_dateEdit->date();


    bool ok =validar_uno(numero,carnet);
    if(!ok)
        return;


    ui->seis_lineEdit_carnet->setText("");
    ui->seis_lineEdit_cuenta->setText("");
    ui->seis_lineEdit_extraido->setValue(0);

    int index=0;
  if (new_banco.buscar_en_cuenta(numero,carnet,index)) {

      if(new_banco.extraer_dinero(index,saldo_extraido,fecha,2)==0){
      QMessageBox::information(this,"Información del saldo. ","¡El Saldo de la cuenta : "+numero+" se actualizó,consulte su saldo!.");
     }
      else if(new_banco.extraer_dinero(index,saldo_extraido,fecha,2)==1)
      {
           QMessageBox::information(this,"Información del saldo. ","¡La cuenta : "+numero+" no tiene suficiente saldo,porfavor recarge!.");
      }
      else if(new_banco.extraer_dinero(index,saldo_extraido,fecha,2)==2)
      {
          QMessageBox::critical(this,"Información del saldo. ","¡La Fecha de extracción es antes que la fecha de creación de la cuenta.!");
      }

  }else {
      QMessageBox::critical(this,"Información de Cuenta. ","¡La Cuenta no existe!.");
  }
}

void MainWindow::on_pushButton_15_clicked()
{




    QString carnet= ui->siete_carnet->text();
    QString numero= ui->siete_cuenta->text();



    bool ok =validar_uno(numero,carnet);
    if(!ok)
        return;

    ui->siete_carnet->setText("");
    ui->siete_cuenta->setText("");

    int index=0;
  if (new_banco.buscar_en_cuenta(numero,carnet,index)) {
      new_banco.mostrar_datos(index,numero,carnet);
  } else {
      QMessageBox::critical(this,"Información de Cuenta. ","¡La Cuenta no existe!.");
  }
}







void MainWindow::on_boton_cerrar_clicked()
{
    close();
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->tableWidget_2->setVisible(false);
     ui->label_6->setVisible(false);
      ui->pushButton_17->setVisible(false);
      ui->pushButton_18->setVisible(false);
}

void MainWindow::on_pushButton_17_clicked()
{

             ui->tableWidget->setVisible(false);
             ui->label->setVisible(false);
             ui->pushButton_18->setVisible(false);
             ui->pushButton_17->setVisible(false);
}

void MainWindow::on_pushButton_19_clicked()
{        ui->pushButton_18->setVisible(true);
    ui->pushButton_17->setVisible(true);
          ui->label->setVisible(true);
               ui->label_6->setVisible(true);
        ui->tableWidget_2->setVisible(true);
        ui->tableWidget->setVisible(true);
}

void MainWindow::on_boton_max_clicked()
{
    this->setGeometry(100,100,1200,700);
}

void MainWindow::on_boton_min_clicked()
{
    this->setGeometry(100,100,700,700);
}
