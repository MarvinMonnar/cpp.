#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void imprimirCaracteres(char caracter, int ciclos)
{
	
	for (int i=0; i < ciclos; i ++ )
	{
		cout << caracter;
	}
	
	cout <<endl;
	
}


int main(int argc, char** argv) {
	
	cout << "Hola Mundo";
	cout<<endl;
	cout<<endl;
	imprimirCaracteres ('@', 10);
	cout <<endl;
	imprimirCaracteres ('#', 5);
	cout <<endl;
	imprimirCaracteres ('*', 1000);
	cout <<endl;
	cout << "Adios Mundo";
	


	return 0;
}
