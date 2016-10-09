#ifndef ANTENA_H_INCLUDED
#define ANTENA_H_INCLUDED

/* *******FALTA AGREGARLE EL #INCLUDE.... DE LA COLA******* */


/*
 *  Representa una antena en el sistema de telefonia
 */

class Antena {

private:
    string nombre;
    int capacidad;
    int capacidadSiendoUsada;
    int capacidadMaximaUsada;
    cola<Celular> colaDeEspera;

public:


};

#endif // ANTENA_H_INCLUDED
