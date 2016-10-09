#ifndef MINUTODELDIA_H
#define MINUTODELDIA_H

#include <string>

/*
 *  Representa un momento del día en minutos.
 */
class MinutoDelDia {

public:

	/*
	 *  pre : minuto está en el intervalo [0, 1439].
	 *  post: crea un MomentoDelDia con el minuto del día indicado.
	 */
	MinutoDelDia(unsigned int minuto);

	/*
	 *  pre : minuto está en el intervalo [0, 1439].
	 *  post: asigna un nuevo minuto del día al momento.
	 */
	void asignar(unsigned int minuto);

	/*
	 *  post: devuelve el minuto del momento del día.
	 */
	unsigned int obtener();

	/*
	 *  post: devuelve el momento del día expresado en formato 'HH:MM'.
	 */
	std::string comoString();
};

#endif // MINUTODELDIA_H
