#include <iostream>
#include <math.h>
#define Pi 3.1416

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) 
{
	
	double numero = 0;
	double seno = 0;
	double coseno = 0;
	double tangente = 0;
	
	
	numero = 2*Pi;
	seno = sin(numero);
	coseno = cos(numero);
	tangente = tan(numero);
	
	cout << "Numero: " << numero << endl; 
	cout << "Seno: " << seno << endl;
	cout << "Coseno: " << coseno << endl;
	cout << "Tangente: " << tangente << endl;
	
	
	return 0;
	
}
