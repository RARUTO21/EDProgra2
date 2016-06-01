#ifndef NODOCERVEZA_H
#define NODOCERVEZA_H

#include <string>

using namespace std;
class NodoCerveza
{
public:
    NodoCerveza(std::string pNombre, std::string pDescripcion, std::string pTipoDeFermentacion, std::string pTiempoDeFermentacion, std::string pTemperatura, std::string pColor, std::string pEstilo, std::string pCuerpo, double pPrecio);
    ~NodoCerveza();

    //Get de los atributos
    std::string getNombre();
    std::string getDescripcion();
    std::string getTipoDeFermentacion();
    std::string getTiempoDeFermentacion();
    std::string getTemperatura();
    std::string getColor();
    std::string getEstilo();
    std::string getCuerpo();
    double getPrecio();

private:
    std::string nombre;
    std::string descripcion;
    std::string tipoDeFermentacion;
    std::string tiempoDeFermentacion;
    std::string temperatura;
    std::string color;
    std::string estilo;
    std::string cuerpo;
    double precio;

};

#endif // NODOCERVEZA_H
