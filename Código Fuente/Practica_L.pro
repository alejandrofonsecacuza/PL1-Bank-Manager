#-------------------------------------------------
#
# Project created by QtCreator 2022-11-30T09:07:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Practica_L
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    form_intalacion.cpp \
    form_instalacion_dos.cpp \
    mostrar_informacion.cpp \
    mostrar_saldo.cpp \
    cuentas.cpp \
    operaciones.cpp \
    banco.cpp

HEADERS  += mainwindow.h \
    form_intalacion.h \
    form_instalacion_dos.h \
    mostrar_informacion.h \
    mostrar_saldo.h \
    cuentas.h \
    operaciones.h \
    banco.h

FORMS    += mainwindow.ui \
    form_intalacion.ui \
    form_instalacion_dos.ui \
    mostrar_informacion.ui \
    mostrar_saldo.ui

RESOURCES += \
    helpers.qrc


