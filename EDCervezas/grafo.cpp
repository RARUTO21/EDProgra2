#include "grafo.h"
#include <QVector>
using namespace std;


//Inicia un contador para usarlo como llave de cada nodo por insertar en el grafo
Grafo::Grafo(){
    counter = 0;
}

//Devuelve el tamaño del grafo
int Grafo::getSize(){
    return counter;
}

//Inserta un nodo de tipo puntero de NodoCerveza en el árbol de búsqueda binaria que almacena cada nodo
//Precondiciones: Debe venir todos los valores como parámetro requerido por el constructor
//Poscondiciones: El contador del grafo debe incrementarse en 1
void Grafo::insertarNodo(QString pNombre, QString pDescripcion, QString pTipoDeFermentacion, QString pTiempoDeFermentacion, QString pTemperatura, QString pColor, QString pTipoNodo, QString pCuerpo, QString pPrecio){
    NodoCerveza* temp = new NodoCerveza(pNombre, pDescripcion, pTipoDeFermentacion, pTiempoDeFermentacion, pTemperatura, pColor, pTipoNodo, pCuerpo, pPrecio);
    arbol.insert(counter,temp);
    counter++;
}

//Enlaza 2 nodos de tipo NodoCerveza de acuerdo con sus nombres ya que estos no se repiten y es más fácil de solicitar al usuario
//Precondiciones: Los nombres de los parámetros deben corresponder a los nombres de los nodos que se van a enlazar
void Grafo::establecerVecinos(QString nodo, QString enlazar){
    int key; //key y value sirven para enlazar los key de cada nodo del árbol en la matriz de adyacencia
    int value;

    //Ciclo que determina cuáles son los key de cada nodo por enlazar y luego asociarlos en la matriz de adyacencia
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
    //Llamada al método que enlaza dos valores enteros en la matriz de adyacencia
    adyacencia.enlazarNodo(key,value);
}

//Desenlaza dos nodos por medio de sus llaves en la matriz de adyacencia
//Precondiciones: Los nombres de los nodos deben existir en el árbol que almacena los NodoCerveza
void Grafo::eliminarVecino(QString nodo, QString eliminar){
    int key;
    int value;

    //Igual que el método anterior: busca en el árbol el valor de las llave para eliminarlos de la lista de adyacencia
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
    //Llamada al método que desenlaza dos valores de la lista de adyacencia
    adyacencia.eliminarVecino(key,value);
}

//Devuelve todos los nodos asociados a un nombre de un nodo de tipo NodoCerveza
//Precondiciones: El nodo debe existir en el árbol
QVector<NodoCerveza* > Grafo::obtenerVecinos(QString nombre){
    int key;

    //En este ciclo se identifica el key asociado al nombre del nodo
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            key = i;
        }
    }
    //Se crea un vector temporal para almacenar los vecinos de tipo NodoCerveza
    QVector<NodoCerveza* > temp;

    //Por cada vecino en la lista de adyacencia, va al árbol y lo inserta en el vector temporal
    for(int i = 0; i< adyacencia.obtenerVecinos(key).size();i++){
        temp<<arbol.find(adyacencia.obtenerVecinos(key)[i]);
    }
    return temp;
}

//Este algoritmo remueve un nodo completamente de la lista de adyacencia
void Grafo::eliminarNodo(QString nombre){
    int key;

    //Identifica el key asociado al nodo con el nombre que viene en el parámetro
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nombre){
            key = i;
        }
    }
    //Llamada al método
    adyacencia.eliminarNodo(key);
}

//Devuelve un vector con todas las familias de cerveza que existen en el grafo
QVector<NodoCerveza* > Grafo::obtenerFamilias(){
    if(counter == 0){
        throw runtime_error("No hay familias ingresadas en el grafo");
    }
    //Se crea un vector temporal
    QVector<NodoCerveza* > temp;

    //Por cada NodoCerveza que contenga el estado "Familia" en su atributo tipoNodo, se agrega en el vector temporal
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getTipoNodo() == "Familia"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

//Devuelve un vector con todos los estilos de cerveza que existen en el grafo
QVector<NodoCerveza* > Grafo::obtenerEstilos(){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para retornar");
    }

    //Se crea un vector temporal
    QVector<NodoCerveza* > temp;

    //Por cada NodoCerveza que contenga el estado "Estilo" en su atributo tipoNodo, se agrega en el vector temporal
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getTipoNodo() == "Estilo"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

//Devuelve un vector con todas las cervezas que existen en el grafo
QVector<NodoCerveza* > Grafo::obtenerCervezas(){
    if(counter == 0){
        throw runtime_error("No hay nodos insertados para retornar");
    }

    //Se crea un vector temporal
    QVector<NodoCerveza* > temp;

    //Por cada NodoCerveza que contenga el estado "Cerveza" en su atributo tipoNodo, se agrega en el vector temporal
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getTipoNodo() == "Cerveza"){
            temp<<arbol.find(i);
        }
    }
    return temp;
}

//Devuelve un NodoCerveza de acuerdo con el nombre que posea
//Precondiciones: El nodo debe existir en el grafo con el nombre que viene en el parámetro
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

//Devuelve un vector con cada estilo de cerveza que esté asociado a una familia con el nombre que viene por parámetro
QVector<NodoCerveza* >  Grafo::obtenerEstilosDeFamilia(QString familia){
    //Se inicia creando un vector temporal que almacenará cada uno de los nodos vecinos que sean de tipo "Estilo"
    QVector<NodoCerveza* > temp;

    //Variable que determinará cuál es la llave asociada a la familia por buscar estilos
    int key;

    //Ciclo donde se establece el valor de la llave en el árbol del NodoCerveza de tipo "Familia" que viene en el parámetro
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == familia){
            key = i;
        }
    }
    //Variable que asegura que la palabra "Estilo" por utilizar sea de tipo QString
    QString estilo = "Estilo";

    //Por cada uno de los vecinos del nodo del parámetro
    for(int i = 0; i<adyacencia.obtenerVecinos(key).size();i++){
        //Si el nodo tiene el estado "Estilo" en el atributo tipoNodo entonces se inserta en el vector temporal
        if(arbol.find(adyacencia.obtenerVecinos(key)[i])->getTipoNodo() == estilo){
            temp = temp << arbol.find(adyacencia.obtenerVecinos(key)[i]);
        }
    }
    return temp;
}

//Devuelve un vector con cada cerveza que esté asociada a un estilo con el nombre que viene por parámetro
QVector<NodoCerveza* > Grafo::obtenerCervezasDeEstilo(QString estilo){
    //Se inicia creando un vector temporal que almacenará cada uno de los nodos vecinos que sean de tipo "Cerveza"
    QVector<NodoCerveza* > temp;

    //Variable que determinará cuál es la llave asociada al estilo por buscar cervezas
    int key;

    //Ciclo donde se establece el valor de la llave en el árbol del NodoCerveza de tipo "Estilo" que viene en el parámetro
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == estilo){
            key = i;
        }
    }

    //Variable que asegura que la palabra "Cerveza" por utilizar sea de tipo QString
    QString cerveza = "Cerveza";

    //Por cada uno de los vecinos del nodo del parámetro
    for(int i = 0; i<adyacencia.obtenerVecinos(key).size();i++){
        //Si el nodo tiene el estado "Cerveza" en el atributo tipoNodo entonces se inserta en el vector temporal
        if(arbol.find(adyacencia.obtenerVecinos(key)[i])->getTipoNodo() == cerveza){
            temp = temp << arbol.find(adyacencia.obtenerVecinos(key)[i]);
        }
    }
    return temp;
}

//Algoritmo que determina si dos nodos son vecinos
//Precondiciones: Los dos nodos deben existir en el árbol que almacena cada uno de los nodos
bool Grafo::sonVecinos(QString nodo1, QString nodo2){
    int key; //key y value son para obtener la llave de nodo1 y nodo2 en el árbol
    int value;

    //Ciclo que asigna las llaves a key y a value
    for(int i = 0; i< counter; i++){
        if(arbol.find(i)->getNombre() == nodo1){
            key = i;
        }
        else{
            if(arbol.find(i)->getNombre() == nodo2){
                value = i;
            }
        }
    }

    //Llamada al método de la clase ListaAdyacencia donde se verifica que dos nodos llaves sean vecinas o no
    return adyacencia.esVecino(key,value);

}

//Devuelve un vector con cada uno de los NodoCerveza de tipo "Estilo" que no esté asociado a un NodoCerveza de tipo "Familia"
QVector<NodoCerveza* > Grafo::obtenerEstilosNoVecinos(QString familia){

    //Vector temporal vacío que va a almacenar cada no-vecino de tipo "Estilo"
    QVector<NodoCerveza* > temp;

    //Ciclo que recorre todos los estilos
    for(int i = 0; i<obtenerEstilos().size();i++){
        //Si la familia que viene de parámetro no es vecino con el elemento del ciclo entonces se inserta en el vector temporal
        if(sonVecinos(familia,obtenerEstilos()[i]->getNombre()) == false){
            temp = temp << obtenerEstilos()[i];
        }
    }
    return temp;
}

//Devuelve un vector con cada uno de los NodoCerveza de tipo "Cerveza" que no esté asociado a un NodoCerveza de tipo "Estilo"
QVector<NodoCerveza* > Grafo::obtenerCervezasNoVecinas(QString estilo){

    //Vector temporal vacío que va a almacenar cada no-vecino de tipo "Cerveza"
    QVector<NodoCerveza* > temp;

    //Ciclo que recorre todas las cervezas
    for(int i = 0; i<obtenerCervezas().size();i++){
        //Si el estilo que viene de parámetro no es vecino con el elemento del ciclo entonces se inserta en el vector temporal
        if(sonVecinos(estilo,obtenerCervezas()[i]->getNombre()) == false){
            temp = temp << obtenerCervezas()[i];
        }
    }

    return temp;
}
