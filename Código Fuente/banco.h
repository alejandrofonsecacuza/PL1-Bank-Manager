#ifndef BANCO_H
#define BANCO_H
#include "banco.h"
#include "mainwindow.h"
#include <QString>
#include "operaciones.h"
#include<QDate>

class Banco
{
 QList<Cuentas>listado_de_cuentas;
 QList<Operaciones>listado_de_operaciones;

public:
    Banco();

    //Prototipos
        bool crear_cuenta(Cuentas new_cuenta);
        void eliminar_cuenta(int index);
        void saldo_actual(int index,QString numero);
        void actualizar_saldo(int index);
        bool depositar_dinero(int index,float saldo_depositado,QDate fecha,int identificador);
        int extraer_dinero(int index,float saldo_extraido,QDate fecha,int identificador);
        void mostrar_datos(int index,QString numero,QString carnet);
         QList<Operaciones>mostrar_transaciones(QDate &fecha_mayor);
        bool buscar_en_cuenta( QString codigo,QString carnet,int &index);
};

#endif // BANCO_H
