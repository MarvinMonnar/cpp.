#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Dado (int cant)
{
  if (cant == 1)
    {
      cout << "Presione \"ENTER\" para lanzar el dado 1";
      cout << endl;
    }
  else
    {
      cout << endl;		
      cout << "Presione \"ENTER\" para lanzar el dado 2";
      cout << endl;
    }
  cin.ignore ();
}


int tirarDado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  
  
  cout << "Obtuvo " << ran; 
  cout <<endl;
 
  return ran;
}


int dado (int dado1, int dado2)
{
  cout << endl;
  cout << "EL RESULTADO ES: "  << dado1  +  dado2; 
  cout <<endl;
  
  return dado1 + dado2;
}



int main ()
{
  int total, primerDado, segundoDado;

  Dado (1);
  primerDado = tirarDado ();
  
  Dado (2);
  segundoDado = tirarDado ();
  
  total = dado(primerDado, segundoDado);
  return 0;

}
