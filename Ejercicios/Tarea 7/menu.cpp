#include <iostream>

using namespace std;

void productos(int opcion);
void imprimirFactura();
void menu()
{

int opcion = 0;

while (true)
	{
		system("COLOR 03");
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
		
		cout << endl;
		cout << "INGRESE UNA OPCION: ";
		cin >> opcion;
		
		if (opcion == 0)
		{
			system("COLOR 03");
			cout<<endl;
			cout <<"*****GRACIAS POR VISITARNOS,VUELVA PRONTO*****" << endl;
			break;
		}
		
		if (opcion == 4)
		
		{
			imprimirFactura(); 
			cout << endl;
			cout <<"*****GRACIAS POR VISITARNOS,VUELVA PRONTO*****" << endl;
			cout << endl;
			system ("pause");
			break;
		}
		
		else
		{
			productos(opcion);

		}
		
	}
}
