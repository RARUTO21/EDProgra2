#include "nodociudad.h"

NodoCiudad::NodoCiudad(std::string pNombre)//Implementación del constructor
{//Recibe como parámetro un string pNombre

    nombre=pNombre;//El atributo nombre es inicializado como pNombre.

}

std::string NodoCiudad::getNombre(){
    /*Implementación del método getNombre()
     * Descripción: Indica el nombre de la ciudad actual.
     * Entradas: No tiene.
     * Salida: Un dato de tipo string */
    return nombre;
}
