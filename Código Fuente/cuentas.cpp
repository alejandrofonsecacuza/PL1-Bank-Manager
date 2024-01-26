#include "cuentas.h"

Cuentas::Cuentas(long _identificador,QString _name,QString _carnet,QDate _fecha, float _saldo,int _interes){
     numero_de_cuenta=_identificador;
    nombre_cliente=_name;
    carnet_identidad=_carnet;
    fecha=_fecha;
    saldo_actual=_saldo;
    interes_anual=_interes;
}
