#include <iostream>
using namespace std;

template<class T>
T square(T n) {
	return n * n;
}

template<class U>
U add(U y, U x) {
	return x + y;
}

void change(int& val) {
	val = 0;
}

int main() {
	cout << square(5) << '\n';
	cout << add(square(3), 10) << '\n';
	cout << min(square(10), add(square(9), 23)) << '\n';
	int variable = 50;
	cout << variable << '\n';
	change(variable);
	cout << variable;
	return 0;
}
