#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	int a = 1;
	string current_player;
	bool winning_state = true;
	cin >> n;

	current_player = "Mahmoud";
	while (winning_state == true) {

		if (current_player == "Mahmoud") {
			for (a = n; (a <= n) && !(a % 2 == 0) && (a >= 1); a--) {
				current_player = "Ehab";
			}

			if ((a <= n) && (a % 2 == 0) && (a >= 1)) {
				winning_state = false;
			}
		}
		else {
			for (a = 1; (a <= n) && !(a % 2 != 0) && (a >= 1); a--) {
				current_player = "Mahmoud";
			}

			if ((a <= n) && (a % 2 != 0) && (a >= 1)) {
				winning_state = false;
			}
		}

	}
	cout << current_player;
}