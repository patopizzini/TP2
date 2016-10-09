#include <iostream>
#include "interfaz.h"

using namespace std;


int main(){

	Interfaz programa;

	programa.mostrarMenuPrincipal();
	programa.derivarAlModo(programa.preguntarModo());

	return 0;
}
