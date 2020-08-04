#include <iostream>

using namespace std;

double calculoImpuesto = 0;
double subtotal = 0;
double total = 0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)

{
	
	
	listaProductos = listaProductos + descripcion + '\n';
	
	subtotal = subtotal + (cantidad * precio);
	
	calculoImpuesto= subtotal * 0.15;
	
	total = subtotal + calculoImpuesto;
}

void imprimirFactura()
{
	system("COLOR 02");
	system ("cls");
	cout << "**********"<< endl;
	cout << "FACTURA"	<< endl;
	cout << "**********"<< endl;
	cout <<	endl;
	
	cout <<	"PRODUCTOS: " << endl;
	cout << listaProductos;
	
	
	cout << endl;
	cout << "SUBTOTAL: Lps." << subtotal << endl;

	cout << endl;
	cout << "IMPUESTO: Lps." << calculoImpuesto << endl;

	cout << endl;
	cout << "TOTAL: Lps." << total << endl;


}
