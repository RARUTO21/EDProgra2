#include "ventanaprincipal.h"
#include <QApplication>
#include "dlinkedlist.h"
#include "QDebug"
#include "arraylist.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaPrincipal w;
    w.show();

    /*
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
    }*/


    //DLinkedList< *DLinkedList<int> > listasDeNumeros;
    //listasDeNumeros.append(&miLista);
    //miLista.goToStart();
    //qDebug()<<miLista.getElement()<<endl;
    /*
    ArrayList<int> *lista;

    lista->append(90);
    lista->append(45);
    lista->append(75);
    lista->append(20);
    */
    /*
    for(int i = 0; i<lista.getSize();i++){
        lista.goToPos(i);
        qDebug()<<"Posicion: "<<i<<" Valor: "<<lista.getElement()<<endl;

    }

    qDebug()<<"---END---"<<endl; */

    //ArrayList< ArrayList<int>* > listaListas;

    //listaListas.insert(lista);


    return a.exec();
}
