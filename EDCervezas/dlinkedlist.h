#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H
#include "dnode.h"
#include "stdexcept"

using namespace std;

template<typename E>

class DLinkedList
{
public:
    DLinkedList(){
        head = new DNode<E>();
        tail = new DNode<E>();
        head->next = tail;
        tail->previous = head;
        current = head;
        size = 0;
    } //definicion de la lista doblemente enlazada

    virtual ~DLinkedList(){
        clear();
        delete head;
        delete tail;
    } //Destructor de clase

    void insert(E pElement){ //Se inserta un nodo nuevo
        current->next = current->next->previous = new DNode<E>(pElement, current->next, current);
        size++; //Se aumenta el tamaño de la lista
    }

    void append(E pElement){ //Se añade un nodo nuevo al final
        tail->previous = tail->previous->next = new DNode<E>(pElement, tail, tail->previous);
        size++;
    }

    E remove()throw(runtime_error){
        if(current->next == tail){
            throw runtime_error("No element"); //Se informa que no se pudo eliminar un elemento
        }
        int res = current->next->element;
        DNode<E>* temp = current->next; //Puntero temporal que apunta al siguiente de current
        current->next = current->next->next;
        current->next->previous = current;
        delete temp; //Se borra el puntero temporal
        size--; //Se disminuye el tamaño de la lista
        return res;
    }

    void clear(){
        while(head->next != tail){ //Se borra uno por uno hasta que no quede ninguno
            current = head->next;
            head->next = head->next->next;
            delete current;
        }
        size = 0; //Se reincia el contador de tamaño
    }

    E getElement()throw(runtime_error){
        if(size == 0){
            throw runtime_error("Empty List");
        }
        if(current->next == tail){
            throw runtime_error("No element");
        }
        return current->next->element; //Se retorna el elemento
    }

    void goToStart(){
        current = head; //current se va a la cabeza (primer nodo)
    }

    void goToEnd(){
        current = tail->previous->previous; //a la hora de hacer el getElement el siguiente a current va a ser el último nodo
    }

    void goToPos(int pPos)throw(runtime_error){
        if(pPos < 0 || pPos > size){
            throw runtime_error("Out of range");
        }
        current = head;
        for(int i = 0; i < pPos; i++){
            current = current->next; //Se va a la posicion indicada dentro del ciclo
        }
    }

    void next(){
        if(current->next != tail){
            current = current->next;
        }
    }

    void previous(){
        if(current != head){
            current = current->previous;
        }
    }

    int getPos(){
        int pos = 0;
        DNode<E>* temp = head;
        while(temp != current){
            temp = temp->next;
            pos++;
        }
        return pos; //Devuelve la posición (contador: pos)
    }

    int getSize(){
        return size;
    }

private:
    DNode<E>* head; // Puntero a la cabeza
    DNode<E>* tail; // Puntero a la cola
    DNode<E>* current; // Puntero a la posición actual
    int size; // Tamaño de la lista enlazada
};

#endif // DLINKEDLIST_H
