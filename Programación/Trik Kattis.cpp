#include <iostream>
#include <string>
using namespace std;

int main() {
    string mov;
    int index = 1;
    cin >> mov;

    for (int i = 0; i < mov.size(); i++) {
        if ((mov[i] == 'A') && ((index == 2) || (index == 1))){
            if (index == 2) {
                index -= 1;
            }
            else {
                index += 1;
            }
        }

        if ((mov[i] == 'B') && ((index == 3) || (index == 2))) {
            if (index == 2) {
                index += 1;
            }
            else {
                index -= 1;
            }
        }

        if ((mov[i] == 'C') && ((index == 3) || (index == 1))) {
            if (index == 3) {
                index -= 2;
            }
            else {
                index += 2;
            }
        }
    }

    cout << index;
}