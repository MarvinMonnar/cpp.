#include <iostream>

using namespace std;

extern void productos(int opcion);

void menu()
{

int opcion = 0;

while (true)
	{
		system("cls");
	
		cout << "**********";
		cout << "MENU";
		cout << "**********";
		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "1 - BEBIDAS CALIENTES"<<endl;
		cout << "2 - BEBIDAS FRIAS"<<endl;
		cout << "3 - REPOSTERIA"<<endl;
		cout << "4 - IMPRIMIR FACTURA"<<endl;
		cout << "0 - SALIR"<<endl;
		
		cin >> opcion;
		
		if (opcion == 0)
		{
			cout<<endl;
			cout <<"*****GRACIAS POR VISITARNOS,VUELVA PRONTO*****" << endl;
			break;
		}
	
		productos(opcion);
	}
}
