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
				cout<<"*******************"<<endl;
				cout<<" BEBIDAS CALIENTES"<<endl;
				cout<<"*******************"<<endl;
				cout<<"1 - CAPUCCINO"<<endl;
				cout<<"2 - EXPRESSO"<<endl;
				cout<<"3 - CAFE CON LECHE"<<endl;

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
			 		case 3:
						agregarProducto("1 CAFE CON LECHE - Lps.12.00",1 ,12);
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
				cout<<"*****************"<<endl;
				cout<<"  BEBIDAS FRIAS"<<endl;
				cout<<"*****************"<<endl;
				cout<<"1 - GRANITA DE CAFE"<<endl;
				cout<<"2 - GRANITA DE PINIA COLADA"<<endl;
				cout<<"3 - AGUA EN BOTE 750ML"<<endl;
				cout << endl;  
				
				cout << "INGRESE UNA OPCION: "; 
				cin >> opcionProducto;

				 switch(opcionProducto)
				 {
				 	case 1:
				 		agregarProducto("1 GRANITA DE CAFE - Lps.35.00",1 ,35);
				 		break;
				 	case 2:
						agregarProducto("1 GRANITA DE PINIA COLADA - Lps.28.00",1 ,28);
			 			break;
			 		case 3:
						agregarProducto("1 AGUA EN BOTE 750ML - Lps.15.00",1 ,15);
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
		
		case 3:
			{
				cout<<"*****************"<<endl;	
				cout<<"   REPOSTERIA"<<endl;
				cout<<"*****************"<<endl;
				cout<<"1 - PASTELITO DE PINIA"<<endl;
				cout<<"2 - GALLETA MARMOLEADA"<<endl;
				cout<<"3 - CROISSANT DE JAMON Y QUESO"<<endl;
				cout << endl;  
				
				cout << "INGRESE UNA OPCION: "; 
				cin >> opcionProducto;

				 switch(opcionProducto)
				 {
				 	case 1:
				 		agregarProducto("1 PASTELITO DE PINIA - Lps.15.00",1 ,15);
				 		break;
				 	case 2:
						agregarProducto("1 GALLETA MARMOLEADA - Lps.20.00",1 ,20);
			 			break;
			 		case 3:
						agregarProducto("1 CROISSANT DE JAMON Y QUESO - Lps.30.00",1 ,30);
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
			
		default :
			break;	
	}
}
