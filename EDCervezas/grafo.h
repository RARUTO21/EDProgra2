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

    NodoCerveza* obtenerNodo(QString nombre);

    bool sonVecinos(QString nodo1, QString nodo2);

    int getSize();

private:
    int counter; //Contador que va a manejar la llave asociada a cada nodo del árbol que almacena valores de tipo NodoCerveza
    BSTree<int,NodoCerveza* > arbol; //Árbol de búsqueda binaria que se encarga de almacenar valores de tipo NodoCerveza
    ListaAdyacencia adyacencia; //Lista de adyacencia que se encarga llevar el control de los vecinos

};

#endif // GRAFO_H
