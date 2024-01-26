/********************************************************************************
** Form generated from reading UI file 'form_instalacion_dos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_INSTALACION_DOS_H
#define UI_FORM_INSTALACION_DOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_instalacion_dos
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *textEdit;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Form_instalacion_dos)
    {
        if (Form_instalacion_dos->objectName().isEmpty())
            Form_instalacion_dos->setObjectName(QStringLiteral("Form_instalacion_dos"));
        Form_instalacion_dos->resize(498, 402);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        Form_instalacion_dos->setWindowIcon(icon);
        Form_instalacion_dos->setStyleSheet(QLatin1String("#Form_instalacion_dos{\n"
"\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"#frame_7{\n"
"border:1px solid black;\n"
"}"));
        verticalLayout = new QVBoxLayout(Form_instalacion_dos);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(Form_instalacion_dos);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(frame_6);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Bk"));
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(124, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(frame_6);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        textEdit = new QTextEdit(frame_8);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setReadOnly(true);

        verticalLayout_6->addWidget(textEdit);


        verticalLayout_5->addWidget(frame_8);

        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox = new QCheckBox(frame_9);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        checkBox->setFont(font1);

        horizontalLayout_3->addWidget(checkBox);

        horizontalSpacer_4 = new QSpacerItem(497, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addWidget(frame_9);

        verticalLayout_5->setStretch(0, 5);
        verticalLayout_5->setStretch(1, 1);

        verticalLayout_4->addWidget(frame_7);

        verticalLayout_4->setStretch(1, 7);

        verticalLayout->addWidget(frame_2);

        frame = new QFrame(Form_instalacion_dos);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_3);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        progressBar = new QProgressBar(frame_5);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_3->addWidget(progressBar);


        verticalLayout_2->addWidget(frame_5);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setCursor(QCursor(Qt::CrossCursor));
        frame_4->setStyleSheet(QLatin1String("QFrame{\n"
"border:1px solid \n"
"	color: rgb(229, 229, 229);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(426, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(frame_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(frame_4);


        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);

        retranslateUi(Form_instalacion_dos);

        QMetaObject::connectSlotsByName(Form_instalacion_dos);
    } // setupUi

    void retranslateUi(QWidget *Form_instalacion_dos)
    {
        Form_instalacion_dos->setWindowTitle(QApplication::translate("Form_instalacion_dos", "Instalaci\303\263n", Q_NULLPTR));
        label->setText(QApplication::translate("Form_instalacion_dos", "T\303\251rminos y Condiciones", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Form_instalacion_dos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; text-decoration: underline;\">T\303\211RMINOS Y CONDICIONES.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">1.</span> Prohibida su venta o distribuci\303\263n sin autorizaci\303\263n de Alejandro Fonseca Cuza.</p>\n"
"<p style=\"-qt-paragraph-t"
                        "ype:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">2</span>.Prohibida la alteraci\303\263n del c\303\263digo fuente o dise\303\261o de las interfaces gr\303\241ficas.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">3</span>.Alejandro Fonseca Cuza no se hace responsable del mal uso de este software.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LOS ACUERDOS LEGALES EXPUESTO A CONTINUACI\303\223N HABLA DEL USO QUE USTED HAGA DE ESTE SOFTWARE.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(LA UNIVERSIDAD DE ORIENTE Y  EL AUTOR ALEJANDRO NO SE RESPONSABILIZAN DEL USO QUE USTED HAGA CON ESTE SOFTWARE Y SUS SERVICIOS PARA ACEPTAR ESTOS T\303\211RMINOS HAGA CLIC EN ACEPTO.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">SI USTED NO ACEPTA ESTOS T\303\211RMINOS .NO UTILICE \303\211STE SOFTWARE.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Para m\303\241s informaci\303\263n sobr"
                        "e est\303\251 producto o sirvicio .:<span style=\" text-decoration: underline;\"> </span><span style=\" text-decoration: underline; color:#00007f;\">cuzafonsecaalejandro@gmail.com</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Form_instalacion_dos", "Aceptar.", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form_instalacion_dos", "< Atras", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form_instalacion_dos", "Instalar..", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form_instalacion_dos: public Ui_Form_instalacion_dos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_INSTALACION_DOS_H
