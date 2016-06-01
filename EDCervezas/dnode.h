#ifndef DNODE_H
#define DNODE_H

using namespace std;

template <typename E>

class DNode
{
public:
    DNode(E pElement, DNode<E>* pNext = 0, DNode<E>* pPrevious = 0){
        element = pElement;
        previous = pPrevious;
        next = pNext;
    } // Constructor con el valor del nodo

    DNode(DNode<E>* pNext = 0, DNode<E>* pPrevious = 0){
        previous = pPrevious;
        next = pNext;
    } // Constructor sin el valor del nodo




    E element; // Valor del nodo
    DNode<E>* previous; // Puntero a anterior nodo
    DNode<E>* next; // Puntero a siguiente nodo
};

#endif // DNODE_H
