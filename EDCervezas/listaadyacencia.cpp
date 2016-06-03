#include "listaadyacencia.h"
#include <QDebug>

ListaAdyacencia::ListaAdyacencia()
{

}

// SI ALGO DEJA DE FUNCIONAR ENTONCES EL PLAN B ES ESTE: BORRAR ESTE DESTRUCTOR!
ListaAdyacencia::~ListaAdyacencia(){
    for(int i = 0; i < listaPrincipal.getSize(); i++){
        listaPrincipal.goToStart();
        delete [] listaPrincipal.getElement();
    }
    delete [] &listaPrincipal;
}

void ListaAdyacencia::agregarNodo(int keyValue){
    DLinkedList<int> nuevaSubLista;
    nuevaSubLista.append(keyValue);
    listaPrincipal.append(&nuevaSubLista);
}

void ListaAdyacencia::enlazarNodo(int value1, int value2){
    for(int i = 0; i < listaPrincipal.getSize(); i++){

        listaPrincipal.goToPos(i);
        listaPrincipal.getElement()->goToStart();
        if(listaPrincipal.getElement()->getElement() == value1){
            listaPrincipal.getElement()->append(value2);
            qDebug()<<"Llego hasta aqui"<<endl;
        }
    }
}

DLinkedList<int> * ListaAdyacencia:: obtenerVecinos(int value){
    for(int i = 0; i < listaPrincipal.getSize(); i++){
        listaPrincipal.goToPos(i);
        listaPrincipal.getElement()->goToPos(0);
        if(listaPrincipal.getElement()->getElement() == value){
            return listaPrincipal.getElement();
        }
    }
}

void ListaAdyacencia::obtenerValorInicial(int valor){
    listaPrincipal.goToPos(valor);
    listaPrincipal.getElement()->goToStart();
    qDebug()<<"Posicio: "<<valor<<" - Valor inicial: "<<listaPrincipal.getElement()->getElement()<<endl;
}

