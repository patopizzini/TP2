#include <iostream>
#include "interfaz.h"

using namespace std;


int main(){

	unsigned int modo = accederAlMenu();
	switch (modo) {
		case 1 :
			cout << "modo sistema"; //TEMPORAL
			break;
		case 2 :
			cout << "modo celular"; //TEMPORAL
			break;
	}

	return 0;
}
