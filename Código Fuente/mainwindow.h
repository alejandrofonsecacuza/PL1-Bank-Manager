#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mostrar_informacion.h"
#include "cuentas.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void click(int,QString);
    bool validar_uno(QString numero_cuenta="",QString carnet_identidad="" );
    bool validor_dos(QString nombre="",QString carnet_identidad="");
    //bool buscar_en_cuenta( QList <Cuentas> l,QString codigo,QString carnet,int &index);

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_boton_manito_isquierda_clicked();

    void on_boton_manito_derecha_clicked();

    void on_boton_manito_derecha_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_boton_cerrar_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_19_clicked();

    void on_boton_max_clicked();

    void on_boton_min_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
