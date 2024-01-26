#include "banco.h"
#include "mostrar_saldo.h"
#include <QDate>
#include <operaciones.h>
#include <mostrar_informacion.h>
#include<QDebug>



Banco::Banco()
{

}

 bool Banco::crear_cuenta(Cuentas new_cuenta){
     for(int i=0;i<listado_de_cuentas.size();i++){
         if(listado_de_cuentas[i].get_carnet_identidad()==new_cuenta.get_carnet_identidad()){
             listado_de_cuentas[i]=new_cuenta;
             return true;
             }
         }
     listado_de_cuentas<<new_cuenta;
     return false;
}

 void Banco::eliminar_cuenta(int index){
     listado_de_cuentas.erase(listado_de_cuentas.begin()+index);
 }

 void Banco::saldo_actual(int index,QString numero){
     mostrar_saldo *m=new mostrar_saldo(0);
     float saldo=listado_de_cuentas[index].get_saldo_actual();
     m->saldo(numero,saldo);
     m->show();
 }

 void Banco::actualizar_saldo(int index){

     float divi=listado_de_cuentas[index].get_interes_anual()/365;

     qDebug()<<listado_de_cuentas[index].get_interes_anual();
     qDebug()<<"divicion : "+QString::number(divi);

     float parte=listado_de_cuentas[index].get_saldo_actual()*divi;
     parte=parte/100;

     float total=listado_de_cuentas[index].get_saldo_actual()+parte;

     listado_de_cuentas[index].set_saldo_actual(total);

 }


 bool Banco::depositar_dinero(int index,float saldo_depositado,QDate fecha,int identificador){
     if(fecha<listado_de_cuentas[index].get_fecha())
         return false;

     float saldo_actual=listado_de_cuentas[index].get_saldo_actual();
     listado_de_cuentas[index].set_saldo_actual(saldo_actual+saldo_depositado);
     Operaciones new_operacion=Operaciones(listado_de_cuentas[index].get_numero_cuenta(),saldo_depositado,saldo_actual,
      saldo_actual+saldo_depositado,listado_de_cuentas[index].get_nombre_cliente(),fecha,identificador);

     listado_de_operaciones<<new_operacion;
     return true;

 }


 int Banco::extraer_dinero(int index,float saldo_extraido,QDate fecha,int identificador){
     float saldo_actual=listado_de_cuentas[index].get_saldo_actual();
     if(saldo_actual<saldo_extraido){
        return 1;
     }
     if(fecha<listado_de_cuentas[index].get_fecha())
         return 2;

     listado_de_cuentas[index].set_saldo_actual(saldo_actual-saldo_extraido);
     Operaciones new_operacion=Operaciones(listado_de_cuentas[index].get_numero_cuenta(),saldo_extraido,saldo_actual,
      saldo_actual-saldo_extraido,listado_de_cuentas[index].get_nombre_cliente(),fecha,identificador);


     listado_de_operaciones<<new_operacion;
        return 0;
 }


 void Banco::mostrar_datos(int index,QString numero,QString carnet){
     Mostrar_informacion *m=new Mostrar_informacion(0);
    m->show();
    QString nombre=listado_de_cuentas[index].get_nombre_cliente();
    QDate fecha=listado_de_cuentas[index].get_fecha();
    int interes=listado_de_cuentas[index].get_interes_anual();
    float saldo=listado_de_cuentas[index].get_saldo_actual();
    m->pasar_informacion(numero,nombre,carnet,saldo,interes,fecha);

 }


 bool Banco::buscar_en_cuenta(QString codigo,QString carnet,int &index){
     for(int i=0; i<listado_de_cuentas.size(); i++)
         if(listado_de_cuentas[i].get_numero_cuenta()==codigo.toLongLong() and listado_de_cuentas[i].get_carnet_identidad()==carnet ) {
             index=i;
             return true;
         }
     return false;

 }


 QList<Operaciones> Banco::mostrar_transaciones(QDate &fecha_mayor){
           QList<Operaciones>L_aux;


     for(auto i:listado_de_operaciones){
     if(i.get_fecha()>=fecha_mayor){
         fecha_mayor=i.get_fecha();
         }

     }

     for(auto i:listado_de_operaciones){
     if(i.get_fecha().month()==fecha_mayor.month() && i.get_fecha().year()==fecha_mayor.year())
     {
        L_aux<<i;

     }
     }


     return L_aux;

 }
