#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int coste = 20000;
	int valor_recuperacion = 2000;
	int ano = 2005;
	int valor_real;
	double depreciacion = 0;

	for (int i = 1; i <= 6; i++) {
		ano++;
		depreciacion += (coste - valor_recuperacion) / 6;
		valor_real = coste - depreciacion;

		cout << ano << ' ' << i << ' ' << ((coste - valor_recuperacion) / 6) << ' ' << depreciacion << ' ' << valor_real << endl;
	}

	return 0;
}