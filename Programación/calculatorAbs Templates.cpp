#include <iostream>
using namespace std;

template <class T>
void absolute(T num) {
	if (num < 0) {
		num *= -1;
	}

	cout << num;
}


int main() {
	int num1;
	double num2;
	string decision;

	cout << "FLOAT para decimales; INTEGER para enteros" << '\n';
	cin >> decision;

	if (decision == "FLOAT") {
		cin >> num2;
		absolute<double>(num2);
	}
	else if (decision == "INTEGER") {
		cin >> num1;
		absolute<int>(num1);
	}
	
	return 0;
}
