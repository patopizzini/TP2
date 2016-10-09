#include <iostream>
#include "interfaz.h"

using namespace std;


int main(){

	Interfaz programaPrincipal;
	programaPrincipal.mostrarMenuPrincipal();
	switch (programaPrincipal.preguntarModo()) {
		case 1 :
			consolaModoSistema.mostrarMenu();
			break;
		case 2 :
			consolaModoCelular.mostrarMenu();
			break;
	}

	return 0;
}
