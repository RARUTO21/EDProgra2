#ifndef MATRIZADYACENCIA_H
#define MATRIZADYACENCIA_H
#include <QMap>
#include "nodociudad.h"

//Clase para representar al grafo generado con las ciudades y los precios.
class MatrizAdyacencia
{
private:
    QMap<NodoCiudad* ,QMap<NodoCiudad* ,int> > costos;//Declaración de la matriz
public:
    MatrizAdyacencia();//Declaración del constructor.
    ~MatrizAdyacencia();//Declaración del destructor
    void enlazarCiudades(NodoCiudad* salida, NodoCiudad* llegada, int precio);/*Declaración de método
            que enlaza dos ciudades y le añade un precio a la ruta*/

};

#endif // MATRIZADYACENCIA_H
