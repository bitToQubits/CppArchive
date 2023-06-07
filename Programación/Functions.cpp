/*Void, sintaxis, uso de referencias, default values, inline, recursion*/
#include <iostream>
using namespace std;

/*inline void determine(int a) {
	if (a % 2 == 0) cout << a << " is even" << '\n';
	else cout << a << " is odd" << '\n';
}

int main() {
	int a;
	cout << "Calculator of Evens and Odds, 0 to exit." << '\n';
	do {
		cout << "Insert the number: ";
		cin >> a;
		determine(a);
	} while (a != 0);
}*/

/*Ejemplo de recursividad. Algoritmo para calcular factoriales*/

long factorial(long a) {
	if (a > 1)
		return (a * factorial(a - 1));
	else
		return 1;
}

int main() {
	long n;
	cin >> n;
	cout << n << "!= " << factorial(n);
	return 0;
}


/*Factoriales, resuelto de manera iterativa*/

/*
int main() {
	long n;
	cin >> n;
	
	for (int i = n - 1; i >= 1; i--) {
		n = n * i;
	}

	cout << n;
}
*/
