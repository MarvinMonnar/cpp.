#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() 
{
  double numero = 0;
  double raizCuadrada = 0;
  
  system("COLOR 02") ;
  cout << "Ingresa un numero para calcular su raiz cuadrada: ";
  cin >> numero;
 
  cout <<endl;
	
  raizCuadrada = sqrt(numero);
 
  system ("COLOR 06");
  cout << "La raiz cuadrada de " << numero << " es: " << raizCuadrada; 
  cout << endl;
 
  return 0;
}
