#ifndef NODOCERVEZA_H
#define NODOCERVEZA_H

#include <string>
#include <QString>
using namespace std;
class NodoCerveza
{
public:
    NodoCerveza(QString pNombre, QString pDescripcion, QString pTipoDeFermentacion, QString pTiempoDeFermentacion, QString pTemperatura, QString pColor, QString pTipoNodo, QString pCuerpo, QString pPrecio);
    ~NodoCerveza();

    //Get de los atributos
    //QString getNombre();
    QString getNombre();
    QString getDescripcion();
    QString getTipoDeFermentacion();
    QString getTiempoDeFermentacion();
    QString getTemperatura();
    QString getColor();
    QString getTipoNodo();
    QString getCuerpo();
    QString getPrecio();

private:
    QString nombre;
    QString descripcion;
    QString tipoDeFermentacion;
    QString tiempoDeFermentacion;
    QString temperatura;
    QString color;
    QString tipoNodo;
    QString cuerpo;
    QString precio;

};

#endif // NODOCERVEZA_H
