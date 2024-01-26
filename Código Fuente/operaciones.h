#ifndef OPERACIONES_H
#define OPERACIONES_H
#include<QString>
#include<QDate>

class Operaciones {

    long long numero_de_cuenta;
        QString user;
        int identificador;
        float saldo_operacion;
        float saldo_anterior;
        float saldo_resultante;
        QDate fecha;



        //
    public:
        Operaciones(long _numero_de_cuenta,float s_operativo,float s_anter,float _saldo_resultante,QString _user,QDate _fecha,int  _identificador_operacion);

        //Funciones de acceso;
        QString get_user(){return user;}
        int get_identificador() const {return identificador;}
        float get_saldo_operacion()const{return saldo_operacion;}
        float get_saldo_anterior()const{return saldo_anterior;}
        float get_saldo_resultante()const{return saldo_resultante;}
        QDate get_fecha() {return fecha;}
        long long get_numero_de_cuenta(){return numero_de_cuenta;}






};


#endif // OPERACIONES_H
