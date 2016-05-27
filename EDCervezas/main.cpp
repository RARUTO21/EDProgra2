#include "ventanaprincipal.h"
#include <QApplication>
#include "dlinkedlist.h"
#include "QDebug"

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

    miLista.goToStart();

    for(int i = 0; i< miLista.getSize();i++){
        miLista.goToPos(i);
        qDebug()<<"Posicion: "<<i<<" - Valor: "<<miLista.getElement()<<endl;
    }

    /*
    DLinkedList<DLinkedList<int> > listasDeNumeros;
    listasDeNumeros.append(miLista);
    miLista.goToStart();
    qDebug()<<miLista.getElement()<<endl;*/


    return a.exec();
}
