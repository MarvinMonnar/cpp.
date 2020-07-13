#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
int a = 0;
 int b = 0;
 int resultado = 0;
 int resultado2 = 0;
 int resultado3 = 0; 
 int resultado4 = 0;
 
 cout<< "Ingrese el valor de a: " ;
 cin >> a;
 
 cout<< endl;
 
 cout<< "Ingrese el valor de b: ";
 cin>> b; 
 	

 cout<< endl;
 
 resultado = a+b;
 resultado2 = a-b;
 resultado3 = a*b;
 resultado4 = a/b;
 
 cout << "El resultado de a + b es:" << resultado;
 cout << endl;
cout << "El resultado de a - b es:" << resultado2;
cout << endl;
cout << "El resultado de a * b es:" << resultado3;
cout << endl;
cout << "El resultado de a / b es:" << resultado4;
cout << endl;
    return 0;
}
