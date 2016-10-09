#include <iostream>
#include "interfaz.h"
#include "consolaModoSistema.h"
#include "consolaModoCelular.h"

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

void Interfaz::derivarAlModo(unsigned int modo) {

	switch (this->preguntarModo()) {
		case 1 :
			consolaModoSistema.mostrarMenu();
			break;
		case 2 :
			consolaModoCelular.mostrarMenu();
			break;
	}
}
