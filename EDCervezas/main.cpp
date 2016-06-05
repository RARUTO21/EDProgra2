#include "ventanaprincipal.h"
#include <QApplication>
#include "dlinkedlist.h"
#include "QDebug"
#include "arraylist.h"

#include "dnode.h"
#include "nodocerveza.h"

#include "listaadyacencia.h"

#include "bstree.h"

#include "grafo.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaPrincipal w;
    w.show();

    ListaAdyacencia adyacencia;

    adyacencia.enlazarNodo(56,23);
    adyacencia.enlazarNodo(56,80);
    adyacencia.enlazarNodo(9,10);
    adyacencia.enlazarNodo(4,50);
    adyacencia.enlazarNodo(9,0);
    adyacencia.enlazarNodo(56,37);

    adyacencia.eliminarVecino(56,23);

    adyacencia.eliminarNodo(9);

    qDebug()<<"Los vecinos de 56: "<<adyacencia.obtenerVecinos(56);

    //qDebug()<<"Vecinos del 2: "<<adyacencia.obtenerVecinos(2);
    //qDebug()<<"Cantidad de vecinos del 2: "<<adyacencia.obtenerVecinos(2).size();

    BSTree<int,NodoCerveza* > arbol;
    //arbol.insert(0,"Hola");
    //arbol.insert(1,"Mundo!");


    NodoCerveza* pilsen = new NodoCerveza("Pilsen","Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Chichero","Panzon",1200.0);

    arbol.insert(0,pilsen);
    //qDebug()<<"Valor del arbol 0: "<<arbol.find(0)->getNombre()<<endl;

    //qDebug()<<"Valor del arbol 1: "<<arbol.find(1)<<endl;

    //qDebug()<<"Valor del arbol 2: "<<arbol.find(2)<<endl;

    /*
    Grafo grafo;

    QString pilsner = "Pilsner";
    QString american_pilsner = "American Pilsner";
    QString german_pilsner = "German Pilsner";

    grafo.insertarNodo(pilsner,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Estilo","Panzon",1200.0);
    grafo.insertarNodo(american_pilsner,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Estilo","Panzon",1500.0);
    grafo.insertarNodo(german_pilsner,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Estilo","Panzon",1900.0);

    QString ale = "Ale";
    grafo.insertarNodo(ale,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Familia","Panzon",2500.0);

    QString lager = "Lager";
    grafo.insertarNodo(lager,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Familia","Panzon",3000.0);

    QString ginger_ale = "Ginger Ale";
    grafo.insertarNodo(ginger_ale,"Sabe feo","Recorcholis","Mucho tiempo","20˙","Amarilla","Cerveza","Panzon",1000.0);

    grafo.establecerVecinos(pilsner,american_pilsner);
    grafo.establecerVecinos(pilsner,german_pilsner);
    grafo.establecerVecinos(pilsner,ginger_ale);

    for(int i = 0; i < grafo.obtenerVecinos(pilsner).size(); i++){
        qDebug()<<"Vecino de Pilsner"<<grafo.obtenerVecinos(pilsner)[i]->getNombre()<<" Valor: "<<grafo.obtenerVecinos(pilsner)[i]->getPrecio();
    }

    for(int i = 0; i < grafo.obtenerFamilias().size(); i++){
        qDebug()<<"Familia del Grafo: "<<grafo.obtenerFamilias()[i]->getNombre();
    }

    for(int i = 0; i < grafo.obtenerEstilos().size(); i++){
        qDebug()<<"Estilo del Grafo: "<<grafo.obtenerEstilos()[i]->getNombre();
    }

    for(int i = 0; i < grafo.obtenerCervezas().size(); i++){
        qDebug()<<"Cerveza del Grafo: "<<grafo.obtenerCervezas()[i]->getNombre();
    }
    */

    return a.exec();
}
