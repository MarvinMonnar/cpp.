#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) 
{
	int numeroSecreto = 0;
	int miNumero = 0;
	
	//INICIALIZA EL NUMERO RANDOM
	srand(time(NULL));
	
	
	//GENERA UN NUMERO ENTRE 1 Y 10
	numeroSecreto = rand() % 10 + 1;
	do
	{
		cout << "Adivina el numero entre (1 y 10): " ;
		cin >> miNumero;
		
		if(numeroSecreto < miNumero)
		{
			
			cout << "El numero secreto puede ser menor";
			cout << endl;
	
		}
		
		else
		{
			
			if(numeroSecreto > miNumero)
			{
				cout << "El numero secreto puede ser mayor";
				cout << endl;
			}
			
		}
		
	
	}
	
		while (numeroSecreto != miNumero);
		
		cout <<endl;
		cout <<endl;
		
		cout << "****ADIVINASTE****";



	return 0;
}
