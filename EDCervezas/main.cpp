#include "ventanaprincipal.h"
#include <QApplication>
#include "dlinkedlist.h"
#include "QDebug"
#include "arraylist.h"

#include "dnode.h"
#include "nodocerveza.h"

#include "listaadyacencia.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaPrincipal w;
    w.show();


    DLinkedList<int> miLista;

    miLista.append(8);
    miLista.append(12);
    miLista.append(4);
    miLista.append(16);
    miLista.append(0);


    miLista.goToStart();

    for(int i = 0; i< miLista.getSize();i++){
        miLista.goToPos(i);
        qDebug()<<"Posicion: "<<i<<" - Valor: "<<miLista.getElement()<<endl;
    }

    miLista.goToPos(3);
    miLista.remove();

    qDebug()<<"--- Elimanda: Posicion 3 ---"<<endl;

    for(int i = 0; i< miLista.getSize();i++){
        miLista.goToPos(i);
        qDebug()<<"Posicion: "<<i<<" - Valor: "<<miLista.getElement()<<endl;
    }

    ArrayList< DLinkedList<int>* > listaListas;

    listaListas.insert(&miLista);

    listaListas.goToStart();

    for(int i = 0; i < listaListas.getElement()->getSize();i++){
        listaListas.getElement()->goToPos(i);
        qDebug()<<"Sub-elemento: "<<i<<" Valor: "<<listaListas.getElement()->getElement()<<endl;

    }

    //qDebug()<<"Elemento: "<<listaListas.getElement()->getElement()<<endl;


    ListaAdyacencia adyacencia;

    adyacencia.agregarNodo(9);
    adyacencia.agregarNodo(4);
    adyacencia.agregarNodo(56);

    //adyacencia.obtenerValorInicial(3);

    //adyacencia.enlazarNodo(56,23);
    //adyacencia.enlazarNodo(56,80);
    /*
    qDebug()<<"Lista de adyacencia: \n\n Valor: "<<56<<endl<<"Vecinos: "<<endl;
    for(int i = 1; i< adyacencia.obtenerVecinos(56)->getSize(); i++){
        adyacencia.obtenerVecinos(56)->goToPos(i);
        qDebug()<<adyacencia.obtenerVecinos(56)->getElement()<<endl;
    }
    */


    return a.exec();
}
