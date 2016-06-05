#ifndef GRAFO_H
#define GRAFO_H


#include "bstree.h"
#include "listaadyacencia.h"
#include "nodocerveza.h"

#include <QVector>


class Grafo
{
public:
    Grafo();
    void insertarNodo(QString pNombre, QString pDescripcion, QString pTipoDeFermentacion, QString pTiempoDeFermentacion, QString pTemperatura, QString pColor, QString pTipoNodo, QString pCuerpo, QString pPrecio);
    void establecerVecinos(QString nodo, QString enlazar);
    void eliminarVecino(QString nodo, QString eliminar);
    QVector<NodoCerveza* > obtenerVecinos(QString nombre);
    void eliminarNodo(QString nombre);

    QVector<NodoCerveza* > obtenerFamilias();
    QVector<NodoCerveza* > obtenerEstilos();
    QVector<NodoCerveza* > obtenerCervezas();

    QVector<NodoCerveza* > obtenerEstilosDeFamilia(QString familia);
    QVector<NodoCerveza* > obtenerCervezasDeEstilo(QString estilo);

    QVector<NodoCerveza* > obtenerEstilosNoVecinos(QString familia);
    QVector<NodoCerveza* > obtenerCervezasNoVecinas(QString estilo);

    //BSTree<int,NodoCerveza* > obtenerNodos();

    NodoCerveza* obtenerNodo(QString nombre);

    bool sonVecinos(QString nodo1, QString nodo2);

    int getSize();

private:
    int counter;
    BSTree<int,NodoCerveza* > arbol;
    ListaAdyacencia adyacencia;

};

#endif // GRAFO_H
