#include "nodocerveza.h"

using namespace std;

//Inicialización de cada atributo recibido por parámetro
NodoCerveza::NodoCerveza(QString pNombre, QString pDescripcion, QString pTipoDeFermentacion, QString pTiempoDeFermentacion, QString pTemperatura, QString pColor, QString pTipoNodo, QString pCuerpo, QString pPrecio)
{
    nombre = pNombre;
    descripcion = pDescripcion;
    tipoDeFermentacion = pTipoDeFermentacion;
    tiempoDeFermentacion = pTiempoDeFermentacion;
    temperatura = pTemperatura;
    color = pColor;
    tipoNodo = pTipoNodo;
    cuerpo = pCuerpo;
    precio = pPrecio;
}

NodoCerveza::~NodoCerveza(){
}

//Getter de cada atributo

QString NodoCerveza::getNombre(){
    return nombre;
}

QString NodoCerveza::getDescripcion(){
    return descripcion;
}

QString NodoCerveza::getTipoDeFermentacion(){
    return tipoDeFermentacion;
}

QString NodoCerveza::getTiempoDeFermentacion(){
    return tiempoDeFermentacion;
}

QString NodoCerveza::getTemperatura(){
    return temperatura;
}

QString NodoCerveza::getColor(){
    return color;
}

QString NodoCerveza::getTipoNodo(){
    return tipoNodo;
}

QString NodoCerveza::getCuerpo(){
    return cuerpo;
}

QString NodoCerveza::getPrecio(){
    return precio;
}
