#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int n_days;
	string capitals;

	cin >> n_days;
	cin >> capitals;

	int n_seattle;
	int n_sanfrancisco;

	n_seattle = 0;
	n_sanfrancisco = 0;

	for (int i = 0; i <= n_days; i++) {
		if (i + 1 < n_days) {
			if (capitals[i] == 'S') {
				if (capitals[i + 1] == 'F') {
					n_seattle++;
				}
			}
			else {
				if (capitals[i + 1] == 'S') {
					n_sanfrancisco++;
				}
			}
		}
	}

	if (n_seattle > n_sanfrancisco) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}