#ifndef GRAFO_H
#define GRAFO_H
#include "bstree.h"
#include "nodociudad.h"


class Grafo
{
private:
    int contador;
    BSTree<int, NodoCiudad* > arbol;
    std::string nombre;
public:
    Grafo();
    ~Grafo();
    void insertarCiudad(std::string nombre);
    NodoCiudad* obtenerCiudad(std::string nombre);

};

#endif // GRAFO_H
