#include <iostream>
using namespace std;

int main() {
	struct Quotient {
		int nominator;
		int denominator;

		Quotient(int X, int Y) {
			nominator = X;
			denominator = Y;
		}

		Quotient add(const Quotient& other) const {
			if (other.denominator == denominator) {
				return Quotient(nominator + other.nominator, denominator);
			}
			else {
				int NewDenominator = other.denominator * denominator;
				int NewNominator = other.denominator * nominator + other.nominator * denominator;

				return Quotient(NewNominator, NewDenominator);
			}
		}

		Quotient multiply(const Quotient& other) const {
			return Quotient(other.nominator * nominator, other.denominator * denominator);
		}

		void print() const {
			cout << nominator << '/' << denominator << endl;
		}
	};

	Quotient fraction1(8, 5);
	Quotient fraction2(8, 5);

	Quotient multiply = fraction1.multiply(fraction2);
	Quotient sum = fraction1.add(fraction2);

	multiply.print();
	sum.print();
}
