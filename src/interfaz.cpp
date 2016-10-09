#include <iostream>
#include "interfaz.h"

using namespace std;

unsigned int accederAlMenu () {

	cout << "Seleccione modo del software:" << endl;
	cout << "1. Sistema" << endl;
	cout << "2. Celular" << endl;
	cout << "3. Salir" << endl;
	cout << endl;
	int modo;
	do {
		cin >> modo;
	} while ((modo < 1) || (modo > 3));

	return modo;
}


