#ifndef LISTAADYACENCIA_H
#define LISTAADYACENCIA_H

#include "arraylist.h"
#include "dlinkedlist.h"
#include "nodocerveza.h"


class ListaAdyacencia
{
public:
    ListaAdyacencia();
    ~ListaAdyacencia();

    void agregarNodo(NodoCerveza nodo);
    void enlazarNodo(NodoCerveza nodo1, NodoCerveza nodo2);

    DLinkedList<NodoCerveza> * obtenerVecinos(NodoCerveza nodo);


private:
    ArrayList< DLinkedList<NodoCerveza>* > listaPrincipal;

};

#endif // LISTAADYACENCIA_H
