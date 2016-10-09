#ifndef CONSOLAMODOCELULAR_H
#define CONSOLAMODOCELULAR_H

/*
 *  Representa una sesión del programa en consola que trabaja sobre un Sistema 
 *  en particular, en el modo de operación de celular.
 */
class ConsolaModoCelular {

	/*
	 *  post: crea una sesión de consola que trabaja sobre el sistema 'sistema'.
	 */
	ConsolaModoCelular(Sistema& sistema);

	/*
	 *  post: comienza la comunicación con el sistema
	 */
	void iniciar();
};
#endif // CONSOLAMODOCELULAR_H
