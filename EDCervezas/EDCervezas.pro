#-------------------------------------------------
#
# Project created by QtCreator 2016-05-25T12:34:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EDCervezas
TEMPLATE = app


SOURCES += main.cpp\
        ventanaprincipal.cpp \
    registrarcerveza.cpp \
    registrarfamiliacerveza.cpp \
    registrarestilocerveza.cpp

HEADERS  += ventanaprincipal.h \
    dnode.h \
    dlinkedlist.h \
    arraylist.h \
    registrarcerveza.h \
    registrarfamiliacerveza.h \
    registrarestilocerveza.h

FORMS    += ventanaprincipal.ui \
    registrarcerveza.ui \
    registrarfamiliacerveza.ui \
    registrarestilocerveza.ui
