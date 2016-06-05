#-------------------------------------------------
#
# Project created by QtCreator 2016-06-01T02:02:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EDAerolineas
TEMPLATE = app


SOURCES += main.cpp\
        ventanaprincipal.cpp \
    matrizadyacencia.cpp \
    nodociudad.cpp \
    grafo.cpp

HEADERS  += ventanaprincipal.h \
    matrizadyacencia.h \
    bstnode.h \
    nodociudad.h \
    bstree.h \
    grafo.h

FORMS    += ventanaprincipal.ui
