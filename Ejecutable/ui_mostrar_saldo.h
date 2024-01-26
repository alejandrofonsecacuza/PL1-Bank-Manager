/********************************************************************************
** Form generated from reading UI file 'mostrar_saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_SALDO_H
#define UI_MOSTRAR_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mostrar_saldo
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *mostrar_saldo)
    {
        if (mostrar_saldo->objectName().isEmpty())
            mostrar_saldo->setObjectName(QStringLiteral("mostrar_saldo"));
        mostrar_saldo->setWindowModality(Qt::ApplicationModal);
        mostrar_saldo->resize(327, 132);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img (5).png"), QSize(), QIcon::Normal, QIcon::Off);
        mostrar_saldo->setWindowIcon(icon);
        mostrar_saldo->setStyleSheet(QLatin1String("#frame{\n"
"background-color: rgb(112, 112, 112);\n"
"}\n"
"QDialog{\n"
"background-color: rgb(76, 76, 76);\n"
"\n"
"}\n"
"\n"
"QLabel{\n"
"\n"
"	color:white;\n"
"font: italic 16pt \"Roboto Bk\";\n"
"}\n"
"QLineEdit{\n"
" color: white;\n"
"    background-color: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid white;\n"
"\n"
"height: 40px;\n"
"font: italic 16pt \"Roboto Bk\";\n"
"\n"
"}"));
        verticalLayout = new QVBoxLayout(mostrar_saldo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(mostrar_saldo);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(mostrar_saldo);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(1, 6);

        retranslateUi(mostrar_saldo);

        QMetaObject::connectSlotsByName(mostrar_saldo);
    } // setupUi

    void retranslateUi(QDialog *mostrar_saldo)
    {
        mostrar_saldo->setWindowTitle(QApplication::translate("mostrar_saldo", "Informaci\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("mostrar_saldo", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("mostrar_saldo", "Saldo :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mostrar_saldo: public Ui_mostrar_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_SALDO_H
