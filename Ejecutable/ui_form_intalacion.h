/********************************************************************************
** Form generated from reading UI file 'form_intalacion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_INTALACION_H
#define UI_FORM_INTALACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Intalacion
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form_Intalacion)
    {
        if (Form_Intalacion->objectName().isEmpty())
            Form_Intalacion->setObjectName(QStringLiteral("Form_Intalacion"));
        Form_Intalacion->setEnabled(true);
        Form_Intalacion->resize(506, 331);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        Form_Intalacion->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Form_Intalacion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Form_Intalacion);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: transparent;"));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(100, 231));

        horizontalLayout_3->addWidget(pushButton_4);


        horizontalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit = new QTextEdit(frame_5);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setStyleSheet(QStringLiteral("border:2px solid black;"));
        textEdit->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit);


        horizontalLayout_2->addWidget(frame_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);

        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setStyleSheet(QLatin1String("#frame3{\n"
"\n"
"background-color: rgb(0, 0, 0);}\n"
"\n"
"QPushButton{\n"
"background-color: white;\n"
"\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        pushButton_3->setFont(font);

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addWidget(frame_3);

        verticalLayout_2->setStretch(0, 10);
        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(frame);


        retranslateUi(Form_Intalacion);

        QMetaObject::connectSlotsByName(Form_Intalacion);
    } // setupUi

    void retranslateUi(QWidget *Form_Intalacion)
    {
        Form_Intalacion->setWindowTitle(QApplication::translate("Form_Intalacion", "Instalaci\303\263n de Gestor Bancario v1.0", Q_NULLPTR));
        pushButton_4->setText(QString());
        textEdit->setHtml(QApplication::translate("Form_Intalacion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Bienvenido al asisente de instalaci\303\263n de Gestor de </span><span style=\" font-size:14pt; font-weight:600;\">Cuentas Bancarias</span><span style=\" font-size:16pt; font-weight:600;\"> 1.0.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\303\211ste programa inst\303\241la un Gestor de Cuentas Bancarias en su sistema.</span></p>\n"
"<p style=\"-qt-paragraph-type:emp"
                        "ty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Gestor de Cuentas Bancarias</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\"> es un programa que te permite crear,borrar,modificar,organizar cuentas bancarias (Esta vez con interf\303\241z grafica).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; f"
                        "ont-weight:600;\">Se remomienda que cierre todas las dem\303\241s aplicaciones antes de iniciar la instalaci\303\263n .</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Presione Siguiente para continuar con la instalaci\303\263n</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt;\"><br /></p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form_Intalacion", "Acerca de.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form_Intalacion", "Siquiente", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form_Intalacion", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form_Intalacion: public Ui_Form_Intalacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_INTALACION_H
