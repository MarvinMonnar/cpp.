#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sumar (int a, int b)
{
	return a + b;
	
}


int calculadora(int a, int b, char operador)
{
	if (operador == '+')
	{
		return sumar (a,b);
	}
system("COLOR 04");
throw "***El operador no existe***";

	
}

int main(int argc, char** argv) {

int n1 = 0;
int n2 = 0;
int resultado = 0;
char operador;

cout << "Ingrese a: ";
cin >> n1;

cout << "Ingrese b: ";
cin >>n2;

cout << "Ingrese el operador (+, -, *, /)";
cin >> operador;

cout << endl;

try 
{
	resultado = calculadora (n1, n2, operador);
	cout << "El resultado de " << n1 << " "<< operador << " "<< n2 << " es: ";
	cout << resultado;
}

catch (const char* error)
{
	cout << error;
}



return 0;

}
