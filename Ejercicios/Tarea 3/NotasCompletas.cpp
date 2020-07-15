#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {


	int nota = 0;
	
	cout << "Ingrese la nota que obtuvo: ";
	cin >> nota;
	
		if (nota > 100 || nota < 0)
	{
		cout << "Ingrese una nota entre 0 - 100";
		return 0;
	 } 
	
		if (nota >= 96 && nota <= 100)
	{
		cout << "Obtuviste una A++";
	}
		if (nota >= 91 && nota <= 95)
	{
		cout << "Obtuviste una A+";
	}
		if (nota >= 90 && nota <= 94)
	{
		cout << "Obtuviste una A";
	}
		if (nota >= 85 && nota <= 89)
	{
		cout << "Obtuviste una A-";
	}
		if (nota >= 80 && nota <= 84)
	{
		cout << "Obtuviste una B+";
	}
		if (nota >= 75 && nota <= 79)
	{
		cout << "Obtuviste una B";
	}
		if (nota >= 70 && nota <= 74)
	{
		cout << "Obtuviste una B-";
	}
		if (nota >= 65 && nota <= 69)
	{
		cout << "Obtuviste una C+";
	}
		if (nota >= 60 && nota <= 64)
	{
		cout << "Obtuviste una C";
	}
		if (nota >= 55 && nota <= 59)
	{
		cout << "Obtuviste una C-";
	}	
	if (nota >= 50 && nota <= 54)
	{
		cout << "Obtuviste una D+";
	}	
	if (nota >= 45 && nota <= 49)
	{
		cout << "Obtuviste una D";
	}	
	if (nota >= 40 && nota <= 44)
	{
		cout << "Obtuviste una D-";
	}	
	if (nota >= 35 && nota <= 39)
	{
		cout << "Obtuviste una E+";
	}	
	if (nota >= 30 && nota <= 34)
	{
		cout << "Obtuviste una E";
	}	
	if (nota >= 25 && nota <= 29)
	{
		cout << "Obtuviste una E-";
	}	
	if (nota >= 20 && nota <= 24)
	{
		cout << "Obtuviste una F+";
	}	
	if (nota >= 15 && nota <= 19)
	{
		cout << "Obtuviste una F";
	}	
	if (nota >= 10 && nota <= 14)
	{
		cout << "Obtuviste una F";
	}	
	if (nota >= 5 && nota <= 9)
	{
		cout << "Obtuviste una F-";
	}	
	if (nota >= 0 && nota <= 4)
	{
		cout << "Obtuviste una F--";
	}
	




	return 0;
}
