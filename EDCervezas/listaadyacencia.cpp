#include "listaadyacencia.h"

ListaAdyacencia::ListaAdyacencia()
{

}

void ListaAdyacencia::agregarNodo(NodoCerveza nodo){
    //DLinkedList<NodoCerveza> nuevaSubLista;
    //nuevaSubLista.append(nodo);
    //listaPrincipal.append(&nuevaSubLista);
}

void ListaAdyacencia::enlazarNodo(NodoCerveza nodo1, NodoCerveza nodo2){

}

DLinkedList<NodoCerveza> * ListaAdyacencia:: obtenerVecinos(NodoCerveza nodoBuscado){
    for(int i = 0; i < listaPrincipal.getSize(); i++){
        listaPrincipal.goToPos(i);
        listaPrincipal.getElement()->goToPos(0);
        if(listaPrincipal.getElement()->getElement().getNombre() == nodoBuscado.getNombre()){
            return listaPrincipal.getElement();
        }

    }

    /*for(DLinkedList<NodoCerveza>* nodo : listaPrincipal){
        nodo->goToStart();
        if(nodo->getElement().getNombre() = nodoBuscado.getNombre()){
            return nodo;
        }
    }*/
}

