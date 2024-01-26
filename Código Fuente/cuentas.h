#ifndef CUENTAS_H
#define CUENTAS_H
#include<QDate>



class Cuentas {
    private:
        long   numero_de_cuenta;
        QString nombre_cliente;
        QString carnet_identidad;
        QDate fecha;
        float saldo_actual;
        float interes_anual;


    public:

   Cuentas(long _identificador,QString _name,QString _carnet,QDate _fecha, float _saldo,int _interes);


        //funciones de acceso

        long get_numero_cuenta()const {
                    return numero_de_cuenta;
                }

        QString get_carnet_identidad()const {
            return carnet_identidad;

        }
        QString get_nombre_cliente() const {
            return nombre_cliente;
        }
        QDate get_fecha() const {
            return fecha;
        }
        float get_saldo_actual()const {
            return saldo_actual;
        }
        float get_interes_anual()const {
            return interes_anual;
        }

        //Funciones modificadoras
        void set_saldo_actual(float a) {
            saldo_actual=a;
        }
        void set_interes_anual(float a) {
            interes_anual=a;
        }

        void set_identificador(int a){
                numero_de_cuenta=a;
            }
};


#endif // CUENTAS_H
