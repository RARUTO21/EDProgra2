#include "listaadyacencia.h"
#include <QDebug>

ListaAdyacencia::ListaAdyacencia(){}
ListaAdyacencia::~ListaAdyacencia(){}

//Método que enlaza dos valores en la lista de adyacencia
void ListaAdyacencia::enlazarNodo(int key, int value){
    //A un llave del mapa se le asocia un valor
    mapa[key] =  mapa[key] << value;
    //Esto hace que haya una relacion bidireccional
    mapa[value] = mapa[value] <<key;

    //qDebug()<<"El valor: "<<key<<" esta enlazado con: "<<mapa.value(key);
}

//Devuelve un vector con todos las valores asociados a una llave
QVector<int> ListaAdyacencia::obtenerVecinos(int key){
    return mapa[key];
}

//Elimina un valor asociado a una llave en el mapa
void ListaAdyacencia::eliminarVecino(int key, int value){
    for(int i = 0; i<mapa[key].size();i++){
        if(mapa[key][i] == value){
            mapa[key].remove(i);
            //qDebug()<<"Valor: "<<key<<" Vecino: "<<value<<" Eliminado!";
            //qDebug()<<"El valor: "<<key<<" esta enlazado con: "<<mapa.value(key);
        }
    }
}

//Elimina completamente una llave y sus valores asociados
void ListaAdyacencia::eliminarNodo(int key){
    mapa.remove(key);
}

//Determina si dos llaves son vecinas en la lista de adyacencia
bool ListaAdyacencia::esVecino(int key, int value){
    for(int i = 0; i < mapa[key].size(); i++){
        if(mapa[key][i] == value){
            return true;
        }
    }
    return false;
}
