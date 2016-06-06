#ifndef NODOCIUDAD_H
#define NODOCIUDAD_H
#include <string>

/* Clase que guarda el nombre de la ciudad
*/
class NodoCiudad
{
private:
    std::string nombre;//atributo de tipo string que indica el nombre de la ciudad.

public:
    NodoCiudad(std::string pNombre);//Declaración del constructor de la clase
    std::string getNombre();
};

#endif // NODOCIUDAD_H
