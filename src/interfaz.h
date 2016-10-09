#ifndef SRC_INTERFAZ_H_
#define SRC_INTERFAZ_H_


/*
 * La clase modela la interfaz mostrada para interactuar con el usuario
 * a través de la pantalla y el teclado
 */
class Interfaz {

public:

	/*
	 * post: Accede al menú principal del programa
	 */
	void mostrarMenuPrincipal();

	/*
	 * pre: mostrarMenuPrincipal() ejecutada
	 * post: Devuelve "modo" entre 1 y 3
	 */
	unsigned int preguntarModo();

};


#endif /* SRC_INTERFAZ_H_ */
