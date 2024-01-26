#ifndef FORM_INSTALACION_DOS_H
#define FORM_INSTALACION_DOS_H

#include <QWidget>

namespace Ui {
class Form_instalacion_dos;
}

class Form_instalacion_dos : public QWidget
{
    Q_OBJECT

public:
    explicit Form_instalacion_dos(QWidget *parent = 0);
    ~Form_instalacion_dos();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_pushButton_2_clicked();



private:
    Ui::Form_instalacion_dos *ui;
};

#endif // FORM_INSTALACION_DOS_H
