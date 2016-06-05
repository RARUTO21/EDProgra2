#include "nodociudad.h"

NodoCiudad::NodoCiudad(std::string pNombre)
{
    nombre=pNombre;

}

std::string NodoCiudad::getNombre(){
    return nombre;
}
