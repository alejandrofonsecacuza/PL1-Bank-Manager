#include "mainwindow.h"
#include"form_intalacion.h"
#include "form_instalacion_dos.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>







int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Form_Intalacion w;
    MainWindow wd;
    QFile instalado;
    QTextStream io;

    instalado.setFileName("./Cache.txt");
    instalado.open(QIODevice::ReadWrite | QIODevice::Text);
    io.setDevice(&instalado);
    QString entero;
    entero=io.readAll();
    if(entero=="1"){
        wd.show();
    }else{
        w.show();

    }

    instalado.flush();
    instalado.close();

    return a.exec();
}
