#include <iostream>
#include "interfaz.h"

using namespace std;

void Interfaz::mostrarMenuPrincipal () {

	cout << "Seleccione modo del software:" << endl;
	cout << "1. Sistema" << endl;
	cout << "2. Celular" << endl;
	cout << "3. Salir" << endl;
	cout << endl;
}

unsigned int Interfaz::preguntarModo() {

	int modo;
	do {
		cin >> modo;
	} while ((modo < 1) || (modo > 3));

	return modo;
}


