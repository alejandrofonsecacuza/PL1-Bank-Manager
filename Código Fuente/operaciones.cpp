#include "operaciones.h"


Operaciones::Operaciones(long _numero_de_cuenta,float s_operativo,float s_anter,float _saldo_resultante,QString _user,QDate _fecha,int  _identificador_operacion) {
    numero_de_cuenta=_numero_de_cuenta;
     user=_user;
    saldo_operacion=s_operativo;
    saldo_anterior=s_anter;
    saldo_resultante=_saldo_resultante;
    fecha=_fecha;
    identificador=_identificador_operacion;
}



