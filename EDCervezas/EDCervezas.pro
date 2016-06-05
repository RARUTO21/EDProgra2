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
    listaadyacencia.cpp \
    nodocerveza.cpp \
    registrarcerveza.cpp \
    buscarcerveza.cpp \
    listacervezasfamilia.cpp \
    borrardatos.cpp \
    grafo.cpp
HEADERS  += ventanaprincipal.h \
    dnode.h \
    dlinkedlist.h \
    arraylist.h \
    listaadyacencia.h \
    nodocerveza.h \
    registrarcerveza.h \
    buscarcerveza.h \
    listacervezasfamilia.h \
    borrardatos.h \
    bstnode.h \
    bstree.h \
    grafo.h
FORMS    += ventanaprincipal.ui \
    registrarcerveza.ui \
    buscarcerveza.ui \
    listacervezasfamilia.ui \
    borrardatos.ui
