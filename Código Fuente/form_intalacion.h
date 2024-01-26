#ifndef FORM_INTALACION_H
#define FORM_INTALACION_H

#include <QWidget>

namespace Ui {
class Form_Intalacion;
}

class Form_Intalacion : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Intalacion(QWidget *parent = 0);
    ~Form_Intalacion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form_Intalacion *ui;
};

#endif // FORM_INTALACION_H
