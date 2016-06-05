#include "listaadyacencia.h"
#include <QDebug>

ListaAdyacencia::ListaAdyacencia(){ }

// SI ALGO DEJA DE FUNCIONAR ENTONCES EL PLAN B ES ESTE: BORRAR ESTE DESTRUCTOR!
ListaAdyacencia::~ListaAdyacencia(){ }

void ListaAdyacencia::enlazarNodo(int key, int value){
    /*
    for(int i = 0; i < adyacencia.size(); i++){
        for(int j = 0; j<adyacencia[i].size(); j++){
            //qDebug()<<"Vector= Pos[i]: "<<i<<" Pos[j]:: "<<j<<" Valor: "<<adyacencia[i][j]<<endl;
        }
    }

    for(int i=0; i< adyacencia.size(); i++){
        if(adyacencia[i][0] == value1){
            QVector<int> temp = adyacencia[i];
            temp<<value2;
            adyacencia[i] = temp;
        }

    }*/
    mapa[key] =  mapa[key] << value;

    qDebug()<<"El valor: "<<key<<" esta enlazado con: "<<mapa.value(key);
}

QVector<int> ListaAdyacencia::obtenerVecinos(int key){
    return mapa[key];
}

void ListaAdyacencia::eliminarVecino(int key, int value){
    for(int i = 0; i<mapa[key].size();i++){
        if(mapa[key][i] == value){
            mapa[key].remove(i);
            qDebug()<<"Valor: "<<key<<" Vecino: "<<value<<" Eliminado!";
            qDebug()<<"El valor: "<<key<<" esta enlazado con: "<<mapa.value(key);
        }
    }
}

void ListaAdyacencia::eliminarNodo(int key){
    mapa.remove(key);
    //qDebug()<<"Nodo: "<<key<<" Eliminado! Ahora no tiene vecinos: "<<mapa[key];
}
