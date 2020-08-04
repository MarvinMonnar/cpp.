#include <iostream>
#include "calculadora.h"
#include "alumnos.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;



int main(int argc, char** argv) {
	
	
	cout << calcular (5 , 7 , '+');
	
	cout << endl;
	cout << endl;
	
	cout << obtenerNombreCompleto();
	
	cout << endl;
	cout << endl;
	
	cout << obtenerEdad();
	
	
	return 0;
}
