#ifndef CONSOLAMODOSISTEMA_H
#define CONSOLAMODOSISTEMA_H

/*
 *  Representa una sesión del programa en consola que trabaja sobre un Sistema 
 *  en particular, en el modo de operación de sistema.
 */
class ConsolaModoSistema {
public:
	/*
	 *  post: crea una sesión de consola que trabaja sobre el sistema 'sistema'.
	 */
	ConsolaModoSistema(Sistema& sistema);

	/*
	 *  post: comienza la comunicación con el sistema
	 */
	void iniciar();
};

#endif
