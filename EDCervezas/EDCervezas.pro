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
<<<<<<< HEAD
    listaadyacencia.cpp \
    nodocerveza.cpp
=======
    registrarcerveza.cpp \
    registrarfamiliacerveza.cpp \
    registrarestilocerveza.cpp
>>>>>>> origin/master

HEADERS  += ventanaprincipal.h \
    dnode.h \
    dlinkedlist.h \
    arraylist.h \
<<<<<<< HEAD
    listaadyacencia.h \
    nodocerveza.h
=======
    registrarcerveza.h \
    registrarfamiliacerveza.h \
    registrarestilocerveza.h
>>>>>>> origin/master

FORMS    += ventanaprincipal.ui \
    registrarcerveza.ui \
    registrarfamiliacerveza.ui \
    registrarestilocerveza.ui
