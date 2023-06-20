#include <iostream>
using namespace std;

int main() {
	/*No te sobrecompliques con la busqueda de la solución*/
	double r, c, porcentaje;
	cin >> r >> c;
	porcentaje = (100 / r) * (r - c);
	cout << fixed << ((porcentaje * porcentaje) / 100);
}