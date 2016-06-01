#include "ventanaprincipal.h"
#include <QApplication>
#include "dlinkedlist.h"
#include "QDebug"
#include "arraylist.h"

#include "dnode.h"
#include "nodocerveza.h"

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

    ArrayList< DLinkedList<int>* > listaListas;

    listaListas.insert(&miLista);

    listaListas.goToStart();

    for(int i = 0; i < listaListas.getElement()->getSize();i++){
        listaListas.getElement()->goToPos(i);
        qDebug()<<"Sub-elemento: "<<i<<" Valor: "<<listaListas.getElement()->getElement()<<endl;

    }

    qDebug()<<"Elemento: "<<listaListas.getElement()->getElement()<<endl;

    //Esto que sigue no funciona
    //NodoCerveza pilsen = new NodoCerveza("Pilse","Sabe fea", "Normal", "50 min", "25 grados centigrados","amarillo","chichera","panzon",1000.0);
    //ArrayList<NodoCerveza* > cervezas;
    //cervezas.append(&pilsen);


    return a.exec();
}
