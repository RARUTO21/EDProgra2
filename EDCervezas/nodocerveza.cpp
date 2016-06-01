#include "nodocerveza.h"

using namespace std;

NodoCerveza::NodoCerveza(std::string pNombre, std::string pDescripcion, std::string pTipoDeFermentacion, std::string pTiempoDeFermentacion, std::string pTemperatura, std::string pColor, std::string pEstilo, std::string pCuerpo, double pPrecio)
{
    nombre = pNombre;
    descripcion = pDescripcion;
    tipoDeFermentacion = pTipoDeFermentacion;
    tiempoDeFermentacion = pTiempoDeFermentacion;
    temperatura = pTemperatura;
    color = pColor;
    estilo = pEstilo;
    cuerpo = pCuerpo;
    precio = pPrecio;
}

NodoCerveza::~NodoCerveza(){

}

std::string NodoCerveza::getNombre(){
    return nombre;
}

std::string NodoCerveza::getDescripcion(){
    return descripcion;
}

std::string NodoCerveza::getTipoDeFermentacion(){
    return tipoDeFermentacion;
}

std::string NodoCerveza::getTiempoDeFermentacion(){
    return tiempoDeFermentacion;
}

std::string NodoCerveza::getTemperatura(){
    return temperatura;
}

std::string NodoCerveza::getColor(){
    return color;
}

std::string NodoCerveza::getEstilo(){
    return estilo;
}

std::string NodoCerveza::getCuerpo(){
    return cuerpo;
}

double NodoCerveza::getPrecio(){
    return precio;
}
