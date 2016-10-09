#include <iostream>
#include "interfaz.h"

using namespace std;


int main(){

	Interfaz programaPrincipal;

	programaPrincipal.mostrarMenuPrincipal();
	programaPrincipal.derivarAlModo(programaPrincipal.preguntarModo());

	return 0;
}
