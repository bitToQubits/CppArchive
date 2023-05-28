#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int length;
	string letters;
	int z = 0;
	int e = 0;
	int r = 0;
	int o = 0;
	int n = 0;

	cin >> length;
	cin >> letters;


	for (int i = 0; i < length; i++) {
		if (letters[i] == 'z') {
			z++;
		}

		if (letters[i] == 'e') {
			e++;
		}

		if (letters[i] == 'r') {
			r++;
		}

		if (letters[i] == 'o') {
			o++;
		}

		if (letters[i] == 'n') {
			n++;
		}
	}

	if (o > 0 && n > 0 && e > 0) {
		for (int c = 0; c < min({o,n,e}); c++) {
			cout << 1 << ' ';
		}
	}

	if (z > 0 && e > 0 && r > 0 && o > 0) {
		for (int d = 0; d < min({ z,e,r,o }); d++) {
			cout << 0 << ' ';
		}
	}
}