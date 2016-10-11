#include "mensaje.h"

#include <string>

Mensaje::Mensaje (Celular* origen, Celular* destino, std::string contenido, MinutoDelDia minutoDeEnvio) {

}

Celular* Mensaje::obtenerOrigen(){
    return origen;
}

Celular* Mensaje:: obtenerDestino(){
    return destino;
}

std::string Mensaje::obtenerContenido(){
    return contenido;
}
