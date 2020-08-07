#include <iostream>
#include <stdlib.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) 
{
	
	int numero =0;
	
	//Inicializa al numero random
	srand(time(NULL));
	
	for(int i= 0; i<20; i++)
	{
		
	// genera un numero entre 1 a 10
	numero= rand() %100 + 1;
	cout << "Numero al azar: "<<numero;
	cout << endl;
	
	}

	
	
	
	
	return 0;
}
