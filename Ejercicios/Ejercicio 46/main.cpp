#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)

{
	if (miNumero == numeroSecreto)
	{
		cout <<endl;
		cout << "****ADIVINASTE****" << endl;
		
		
	}
	else
	{
		
		cout <<"INTENTO FALLIDO CON " << miNumero << endl;
		int otroNumero = 0;
		cout << "Ingrese otro Numero: ";
		cin >> otroNumero;
		adivinarNumeroSecreto(otroNumero);
		
	}
	
}
int main(int argc, char** argv)

{
	
	adivinarNumeroSecreto(5);
	
	
	
	
	return 0;
}
