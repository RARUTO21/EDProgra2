#-------------------------------------------------
#
# Project created by QtCreator 2016-06-05T13:58:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Aerolineas
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    grafo.cpp \
    matrizadyacencia.cpp \
    nodociudad.cpp \
    doublespinboxdelegate.cpp \
    renderarea.cpp \
    DijkstraAlgorithm.cpp \
    FloydAlgorithm.cpp \
    KruskalAlgorithm.cpp \
    PrimAlgorithm.cpp

HEADERS  += widget.h \
    arraylist.h \
    bstnode.h \
    bstree.h \
    grafo.h \
    matrizadyacencia.h \
    nodociudad.h \
    doublespinboxdelegate.h \
    renderarea.h

FORMS    += widget.ui

RESOURCES += \
    imagenes.qrc
