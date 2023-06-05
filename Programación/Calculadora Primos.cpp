/*Introduce un numero, y esta calculadora determinara todos los numeros primos en ese rango*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	bool _isPrime = true;
	cin >> n;

	for (int i = n; i > 0; i--) {
		_isPrime = true;

		for (int a = n; a > 0; a--) {
			if ((i % a == 0) && (a != 1) && (a != i)) {
				_isPrime = false;
				break;
			}
		}

		if (_isPrime == true) {
			cout << i << " Prime" << '\n';
		}
	}

	return 0;
}