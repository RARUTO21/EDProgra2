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

    void agregarNodo(int keyValue);
    void enlazarNodo(int value1, int value2);
    void obtenerValorInicial(int valor);

    DLinkedList<int> * obtenerVecinos(int keyValue);


private:
    ArrayList< DLinkedList<int>* > listaPrincipal;

};

#endif // LISTAADYACENCIA_H
