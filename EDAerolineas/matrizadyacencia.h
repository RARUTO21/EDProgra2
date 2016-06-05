#ifndef MATRIZADYACENCIA_H
#define MATRIZADYACENCIA_H
#include <QMap>
#include "nodociudad.h"


class MatrizAdyacencia
{
private:
    QMap<NodoCiudad* ,QMap<int, NodoCiudad* > > costos;
public:
    MatrizAdyacencia();
    ~MatrizAdyacencia();
};

#endif // MATRIZADYACENCIA_H
