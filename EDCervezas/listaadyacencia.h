#ifndef LISTAADYACENCIA_H
#define LISTAADYACENCIA_H

#include "nodocerveza.h"

#include <QVector>
#include <QList>
#include <QMap>

//const int N = 4;


class ListaAdyacencia
{
public:
    ListaAdyacencia();
    ~ListaAdyacencia();

    void enlazarNodo(int key, int value); //Q SEA BIDIRECCIONAL
    QVector<int> obtenerVecinos(int key);
    void eliminarVecino(int key, int value);
    void eliminarNodo(int key);

    bool esVecino(int key, int value);

private:
    //Mapa que almacena los valores asociados a una llave cualquiera de tipo entero
    QMap<int,QVector<int> > mapa;

};

#endif // LISTAADYACENCIA_H
