#include "grafo.h"

Grafo::Grafo()
{
    contador= 0;

}

Grafo:: ~Grafo(){

}

void Grafo::insertarCiudad(std::string nombre){
    NodoCiudad* temp= new NodoCiudad(nombre);
    arbol.insert(contador,temp);
    contador++;
}
NodoCiudad* Grafo::obtenerCiudad(std::string nombre){
   for(int i=0; i<contador; i++){
       if(arbol.find(i)->getNombre()==nombre){
           return arbol.find(i);
       }
   }
}
