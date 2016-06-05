#ifndef NODOCERVEZA_H
#define NODOCERVEZA_H

#include <string>
#include <QString>
using namespace std;
class NodoCerveza
{
public:
    NodoCerveza(std::string pNombre, std::string pDescripcion, std::string pTipoDeFermentacion, std::string pTiempoDeFermentacion, std::string pTemperatura, std::string pColor, std::string pTipoNodo, std::string pCuerpo, double pPrecio);
    ~NodoCerveza();

    //Get de los atributos
    //QString getNombre();
    std::string getNombre();
    std::string getDescripcion();
    std::string getTipoDeFermentacion();
    std::string getTiempoDeFermentacion();
    std::string getTemperatura();
    std::string getColor();
    std::string getTipoNodo();
    std::string getCuerpo();
    double getPrecio();

private:
    std::string nombre;
    std::string descripcion;
    std::string tipoDeFermentacion;
    std::string tiempoDeFermentacion;
    std::string temperatura;
    std::string color;
    std::string tipoNodo;
    std::string cuerpo;
    double precio;

};

#endif // NODOCERVEZA_H
