#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sumar(int a, int b)

{
	int resultado = 0;
	return a + b;
}

void sumarConValoresConValorPorReferencia(int &a, int &b, int &resultado)

{
	
	a = 10;
	b = 12;
	resultado = a + b;
}

int main(int argc, char** argv)

{
	int num1 = 5;
	int num2 = 7;
	int r = 0;
	
	
	sumarConValoresConValorPorReferencia(num1, num2, r);
	
	cout << num1 << endl;
	cout << num2 << endl;
	cout << r;
	cout <<endl; 
	cout << "Finalizado";
	
	return 0;


}
