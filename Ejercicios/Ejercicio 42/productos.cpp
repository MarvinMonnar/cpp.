#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system ("cls");
	
	int opcionProducto = 0;
	
	switch (opcion)
	{
		case 1:
			{
				cout<<"BEBIDAS CALIENTES"<<endl;
				cout<<"*****************"<<endl;
				cout<<"1 - CAPUCCINO"<<endl;
				cout<<"2 - EXPRESSO"<<endl;
				cout << endl;  
				
				cout << "INGRESE UNA OPCION: "; 
				cin >> opcionProducto;

				 switch(opcionProducto)
				 {
				 	case 1:
				 		agregarProducto("1 CAPUCCINO - Lps.40.00",1 ,40);
				 		break;
				 	case 2:
						agregarProducto("1 EXPRESSO - Lps.30.00",1 ,30);
			 			break;
				 	
				 		
				 	default :
				 		{
				 			cout<< "OPCION NO VALIDA";
				 			return; 
				 			break;
						}
				 			
						 
				 }
				 
				 cout << endl;
				 
				 cout << "PRODUCTO AGREGADO" << endl;
				 system ("pause");
				break;
			}
		
		case 2:
			{
				
				cout<<"BEBIDAS FRIAS"<<endl;
				cout<<"*************"<<endl;
				system("pause");
					break;
			}	
		
		case 3:
			{
				
				cout<<"REPOSTERIA"<<endl;
				cout<<"**********"<<endl;
				system("pause");
					break;
			}	
			
		default :
			break;	
	}
}
