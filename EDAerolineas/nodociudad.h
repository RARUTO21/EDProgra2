#ifndef NODOCIUDAD_H
#define NODOCIUDAD_H
#include <string>


class NodoCiudad
{
private:
    std::string nombre;
public:
    NodoCiudad(std::string pNombre);
    std::string getNombre();
};

#endif // NODOCIUDAD_H
