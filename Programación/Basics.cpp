#include <iostream>
#include <string>
using namespace std;

int variables()
{
	int a{ 5 }, b{ 1 };

	a = a + b;

	return a;
}

int main()
{
	int a;
	a = variables();
	cout << a << endl;
	string salute = "Hello world";
	cout << salute << endl;
	salute = "GoodBye World!";
	cout << salute << endl;
}