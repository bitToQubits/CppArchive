#include <iostream>
#include <string>
using namespace std;

int main() {
	long long n;
	long long n_i = 0;
	cin >> n;
	
	for (int i = n; i > 1; i--) {
		if ((n % i == 0) && (i != n)) {
			if (n_i >= 1) {
				cout << "Divisible by: " << i << ". Quotient: " << (n / i) << endl;
			}else {
				cout << "Not a prime! " << "Divisible by: " << i << ". Quotient: " << (n / i) << endl;
			}
			n_i++;
		}
	}

	if (n_i == 0) {
		cout << "It's a prime!";
	}

	return 0;
}