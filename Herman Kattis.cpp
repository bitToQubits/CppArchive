#include <iostream>
using namespace std;

int main() {
	double const pi = 3.14159265358979323846;
	double area_euclidian, area_taxicab;
	double radius;
	cin >> radius;
	area_euclidian = (radius * radius) * pi;
	area_taxicab = (radius * radius) * 2;
	cout << fixed << area_euclidian << '\n' << area_taxicab;

	return 0;
}