#ifndef GRAFO_H
#define GRAFO_H
#include "bstree.h"
#include "nodociudad.h"
#include "matrizadyacencia.h"


class Grafo
{
private:
    int contador;
    BSTree<int, NodoCiudad* > arbol;/*Árbol binario que guardará un entero identificador y un
                                    puntero a NodoCiudad para guardar la ciudad asignada al identificador*/
    std::string nombre;//string que representa el nombre de la ciudad a introducir.
    MatrizAdyacencia conexiones;//Inicialización de la matriz de adyacencia.
public:
    Grafo();//Declaración del constructor.
    ~Grafo();//DEclaración del destructor
    void insertarCiudad(std::string nombre);//Declaración de método para insertar una ciudad.
    NodoCiudad* obtenerCiudad(std::string nombre);//Declaración de método para obtener una ciudad.

};

#endif // GRAFO_H
