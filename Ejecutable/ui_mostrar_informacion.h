/********************************************************************************
** Form generated from reading UI file 'mostrar_informacion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_INFORMACION_H
#define UI_MOSTRAR_INFORMACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Mostrar_informacion
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *header;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_mostrar;
    QSpacerItem *horizontalSpacer_2;
    QFrame *body;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QSpinBox *spinBox;
    QCalendarWidget *calendarWidget;
    QFrame *futter;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Mostrar_informacion)
    {
        if (Mostrar_informacion->objectName().isEmpty())
            Mostrar_informacion->setObjectName(QStringLiteral("Mostrar_informacion"));
        Mostrar_informacion->setWindowModality(Qt::ApplicationModal);
        Mostrar_informacion->resize(871, 469);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img (8).png"), QSize(), QIcon::Normal, QIcon::Off);
        Mostrar_informacion->setWindowIcon(icon);
        Mostrar_informacion->setStyleSheet(QLatin1String("#Mostrar_informacion{\n"
"\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"#header{background-color: rgb(97, 97, 97);}\n"
"\n"
"\n"
"#body{background-color: rgb(113, 113, 113);}\n"
"\n"
"\n"
"#futter{background-color: rgb(97, 97, 97);}"));
        verticalLayout = new QVBoxLayout(Mostrar_informacion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        header = new QFrame(Mostrar_informacion);
        header->setObjectName(QStringLiteral("header"));
        header->setStyleSheet(QStringLiteral(""));
        header->setFrameShape(QFrame::StyledPanel);
        header->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(header);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(312, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_mostrar = new QLabel(header);
        label_mostrar->setObjectName(QStringLiteral("label_mostrar"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Lt"));
        font.setPointSize(20);
        label_mostrar->setFont(font);
        label_mostrar->setStyleSheet(QLatin1String("\n"
"color:white;"));

        horizontalLayout->addWidget(label_mostrar);

        horizontalSpacer_2 = new QSpacerItem(312, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(header);

        body = new QFrame(Mostrar_informacion);
        body->setObjectName(QStringLiteral("body"));
        body->setStyleSheet(QLatin1String("QCalendarWidget{\n"
"	\n"
"\n"
"	background-color: rgb(255, 0, 0);\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	font: italic 16pt \"Roboto Bk\";\n"
"\n"
"}\n"
"\n"
"QLineEdit{\n"
" color: white;\n"
"    background-color: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid white;\n"
"\n"
"height: 40px;\n"
"font: italic 16pt \"Roboto Bk\";\n"
"\n"
"}\n"
"\n"
"QSpinBox{\n"
"  color: white;\n"
"    background-color: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid white;\n"
"\n"
"height: 40px;\n"
"font: italic 16pt \"Roboto Bk\";\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"\n"
" color: white;\n"
"    background-color: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid white;\n"
"\n"
"height: 40px;\n"
"font: italic 16pt \"Roboto Bk\";\n"
"}"));
        body->setFrameShape(QFrame::StyledPanel);
        body->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(body);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(body);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(body);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_3 = new QLabel(body);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(body);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout_2->addLayout(formLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(body);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        doubleSpinBox = new QDoubleSpinBox(body);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setReadOnly(true);
        doubleSpinBox->setMaximum(1e+24);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);


        verticalLayout_2->addLayout(formLayout_4);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_5 = new QLabel(body);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        spinBox = new QSpinBox(body);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(300);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, spinBox);


        verticalLayout_2->addLayout(formLayout_3);


        horizontalLayout_3->addLayout(verticalLayout_2);

        calendarWidget = new QCalendarWidget(body);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setEnabled(false);
        calendarWidget->setStyleSheet(QLatin1String("background-color: rgb(130, 130, 130);\n"
"font: 12pt \"Roboto\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        calendarWidget->setGridVisible(true);
        calendarWidget->setDateEditEnabled(false);

        horizontalLayout_3->addWidget(calendarWidget);


        verticalLayout->addWidget(body);

        futter = new QFrame(Mostrar_informacion);
        futter->setObjectName(QStringLiteral("futter"));
        futter->setStyleSheet(QStringLiteral(""));
        futter->setFrameShape(QFrame::StyledPanel);
        futter->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(futter);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(772, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(futter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String(" QPushButton{ background-color: transparent;}\n"
"\n"
"QPushButton:hover{\n"
"border-radius: 22px;\n"
"background-color: rgb(200, 200,200);\n"
" background-color: transparent;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img (10).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(futter);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Mostrar_informacion);

        QMetaObject::connectSlotsByName(Mostrar_informacion);
    } // setupUi

    void retranslateUi(QDialog *Mostrar_informacion)
    {
        Mostrar_informacion->setWindowTitle(QApplication::translate("Mostrar_informacion", "Informaci\303\263n", Q_NULLPTR));
        label_mostrar->setText(QApplication::translate("Mostrar_informacion", "TEXTO PRUEBA", Q_NULLPTR));
        label_2->setText(QApplication::translate("Mostrar_informacion", "Nombre :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Mostrar_informacion", "Carnet I :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Mostrar_informacion", "Saldo :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Mostrar_informacion", "Interes :", Q_NULLPTR));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Mostrar_informacion: public Ui_Mostrar_informacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_INFORMACION_H
