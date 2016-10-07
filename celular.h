#ifndef CELULAR_H
#define CELULAR_H

#include <string>

/*
 *  Representa un celular en el sistema de telefonía.
 */
class Celular {
public:

	/* 
	 *  pre : 'numero' es una secuencia de caracteres numéricos que puede comenzar con un '+'.
	 *  post: crea un celular con el número 'numero' y el identificador 'id' (por defecto 0).
	 */
	Celular(std::string numero, unsigned int id = 0);

	/*
	 *  post: devuelve el número del celular.
	 */
	std::string obtenerNumero();
	
	/*
	 *  post: devuelve el número de identificación del celular.
	 */
	unsigned int obtenerID();
	
};

#endif // CELULAR_H
