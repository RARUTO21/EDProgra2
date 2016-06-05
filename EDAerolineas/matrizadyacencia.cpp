#include "matrizadyacencia.h"

MatrizAdyacencia::MatrizAdyacencia()
{//Constructor de la la clase MatrizAdyacencia()

}
MatrizAdyacencia::~MatrizAdyacencia(){
//Destructor de la clase.
}
void MatrizAdyacencia::enlazarCiudades(NodoCiudad *salida, NodoCiudad *llegada, int precio){
    /* Método que enlaza dos ciudades y añade un precio entre ellas.
     * Entradas: NodoCiudad que indica el la ciudad de salida, NodoCiudad que indica la ciudad de llegada,
                 entero que indica el precio entre las dos ciudades.
     *Salida: No tiene*/

    QMap<NodoCiudad* ,int > temp;//QMap temporal para asignar el precio a la ciudad de llegada.
    temp[llegada]= precio;//Asignación del precio en la ciudad de llegada.

    costos[salida]=temp;//Asignación de la ciudad llegada con su costo y el precio, a la ciudad de salida.
}
