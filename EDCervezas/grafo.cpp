#include "grafo.h"
#include <QVector>
using namespace std;



Grafo::Grafo(){
    counter = 0;
}

int Grafo::getSize(){
    return counter;
}

void Grafo::insertarNodo(QString pNombre, QString pDescripcion, QString pTipoDeFermentacion, QString pTiempoDeFermentacion, QString pTemperatura, QString pColor, QString pTipoNodo, QString pCuerpo, QString pPrecio){
    NodoCerveza* temp = new NodoCerveza(pNombre, pDescripcion, pTipoDeFermentacion, pTiempoDeFermentacion, pTemperatura, pColor, pTipoNodo, pCuerpo, pPrecio);
    arbol.insert(counter,temp);
    counter++;
}

void Grafo::establecerVecinos(QString nodo, QString enlazar){
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

void Grafo::eliminarVecino(QString nodo, QString eliminar){
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

QVector<NodoCerveza* > Grafo::obtenerVecinos(QString nombre){
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

void Grafo::eliminarNodo(QString nombre){
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

NodoCerveza* Grafo::obtenerNodo(QString nombre){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para obtener");
    }
    for(int i = 0; i < counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            return arbol.find(i);
        }
    }
}

QVector<NodoCerveza* >  Grafo::obtenerEstilosDeFamilia(QString familia){
    QVector<NodoCerveza* > temp;
    int key;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == familia){
            key = i;
        }
    }

    QString estilo = "Estilo";
    for(int i = 0; i<adyacencia.obtenerVecinos(key).size();i++){
        //Check this
        if(arbol.find(adyacencia.obtenerVecinos(key)[i])->getTipoNodo() == estilo){
            temp = temp << arbol.find(adyacencia.obtenerVecinos(key)[i]);
        }
    }
    return temp;
}

QVector<NodoCerveza* > Grafo::obtenerCervezasDeEstilo(QString estilo){
    QVector<NodoCerveza* > temp;
    int key;

    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == estilo){
            key = i;
        }
    }

    QString cerveza = "Cerveza";
    for(int i = 0; i<adyacencia.obtenerVecinos(key).size();i++){
        //Check this
        if(arbol.find(adyacencia.obtenerVecinos(key)[i])->getTipoNodo() == cerveza){
            temp = temp << arbol.find(adyacencia.obtenerVecinos(key)[i]);
        }
    }
    return temp;
}
