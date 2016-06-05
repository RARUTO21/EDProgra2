#include "grafo.h"
#include <QVector>
using namespace std;



Grafo::Grafo(){
    counter = 0;
}

int Grafo::getSize(){
    return counter;
}

void Grafo::insertarNodo(std::string pNombre, std::string pDescripcion, std::string pTipoDeFermentacion, std::string pTiempoDeFermentacion, std::string pTemperatura, std::string pColor, std::string pTipoNodo, std::string pCuerpo, double pPrecio){
    NodoCerveza* temp = new NodoCerveza(pNombre, pDescripcion, pTipoDeFermentacion, pTiempoDeFermentacion, pTemperatura, pColor, pTipoNodo, pCuerpo, pPrecio);
    arbol.insert(counter,temp);
    counter++;
}

void Grafo::establecerVecinos(std::string nodo, std::string enlazar){
    int key;
    int value;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nodo){
            key = i;
        }
        else{
            if(arbol.find(i)->getNombre() == enlazar){
                value = i;
            }
        }
    }

    adyacencia.enlazarNodo(key,value);
}

void Grafo::eliminarVecino(string nodo, string eliminar){
    int key;
    int value;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nodo){
            key = i;
        }
        else{
            if(arbol.find(i)->getNombre() == eliminar){
                value = i;
            }
        }
    }
    adyacencia.eliminarVecino(key,value);
}

QVector<NodoCerveza* > Grafo::obtenerVecinos(string nombre){
    int key;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            key = i;
        }
    }

    QVector<NodoCerveza* > temp;

    for(int i = 0; i< adyacencia.obtenerVecinos(key).size();i++){
        temp<<arbol.find(adyacencia.obtenerVecinos(key)[i]);
    }
    return temp;
}

void Grafo::eliminarNodo(std::string nombre){
    int key;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            key = i;
        }
    }

    adyacencia.eliminarNodo(key);
}

QVector<NodoCerveza* > Grafo::obtenerFamilias(){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para retornar");
    }
    QVector<NodoCerveza* > temp;
    for(int i = 0; i< counter; i++){

        if(arbol.find(i)->getTipoNodo() == "Familia"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

QVector<NodoCerveza* > Grafo::obtenerEstilos(){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para retornar");
    }
    QVector<NodoCerveza* > temp;
    for(int i = 0; i< counter; i++){

        if(arbol.find(i)->getTipoNodo() == "Estilo"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

QVector<NodoCerveza* > Grafo::obtenerCervezas(){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para retornar");
    }
    QVector<NodoCerveza* > temp;
    for(int i = 0; i< counter; i++){

        if(arbol.find(i)->getTipoNodo() == "Cerveza"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

NodoCerveza* Grafo::obtenerNodo(string nombre){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para obtener");
    }
    for(int i = 0; i < counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            return arbol.find(i);
        }
    }
}
