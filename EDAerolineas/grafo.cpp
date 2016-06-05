#include "grafo.h"

Grafo::Grafo()
{
    contador= 0;// Contador inicializado en 0 pra representar la llave dentro del árbol.

}

Grafo:: ~Grafo(){

}

void Grafo::insertarCiudad(std::string nombre){
    /*Añade una ciudad al árbol binario.

     *Entrada: string con el nombre de la ciudad.
     *Salida: No tiene*/

    NodoCiudad* temp= new NodoCiudad(nombre);//Creación de un nodo temporal con el nombre de la ciudad.
    arbol.insert(contador,temp);//Inserción del nodo temp en el árbol.
    contador++;
}
NodoCiudad* Grafo::obtenerCiudad(std::string nombre){
   /*Obtiene un NodoCiudad de la ciudad que desea buscarse.
    * Entrada: string con el nombre de la ciudad que desea obtenerse.
    * Salida: NodoCiudad de la ciudad que desea obtenerse.
    */

   NodoCiudad* resultado;//Creación de puntero a NodoCiudad resultante.
   for(int i=0; i<contador; i++){//Ciclo que busca la ciudad dentro del árbol.
       if(arbol.find(i)->getNombre()==nombre){
           resultado= arbol.find(i);
       }
   }
   return resultado;
}
