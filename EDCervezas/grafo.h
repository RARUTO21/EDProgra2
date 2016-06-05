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
    void insertarNodo(std::string pNombre, std::string pDescripcion, std::string pTipoDeFermentacion, std::string pTiempoDeFermentacion, std::string pTemperatura, std::string pColor, std::string pTipoNodo, std::string pCuerpo, double pPrecio);
    void establecerVecinos(std::string nodo, std::string enlazar);
    void eliminarVecino(std::string nodo, std::string eliminar);
    QVector<NodoCerveza* > obtenerVecinos(std::string nombre);
    void eliminarNodo(string nombre);

    QVector<NodoCerveza* > obtenerFamilias();
    QVector<NodoCerveza* > obtenerEstilos();
    QVector<NodoCerveza* > obtenerCervezas();

    //BSTree<int,NodoCerveza* > obtenerNodos();

    NodoCerveza* obtenerNodo(std::string nombre);

    int getSize();

private:
    int counter;
    BSTree<int,NodoCerveza* > arbol;
    ListaAdyacencia adyacencia;

};

#endif // GRAFO_H
