#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

/*
 *  Representa el envío de un mensaje entre dos celulares en un momento
 *	del día.
 */
class Mensaje {

public:
	
	/*  
	 *  pre : origen y destino no son NULL.
	 *  post: crea un mensaje con origen, destino, contenido y minuto de envio indicados
	 */
	Mensaje(Celular* origen, Celular* destino, std::string contenido, MinutoDelDia minutoDeEnvio);

	/*
	 *  post: devuelve el origen del mensaje.
	 */
	Celular* obtenerOrigen();

	/*
	 *  post: devuelve el destino del mensaje.
	 */
	Celular* obtenerDestino();

	/*
	 *  post: devuelve el contenido del mensaje.
	 */
	std::string obtenerContenido();
};

#endif // MENSAJE_H
