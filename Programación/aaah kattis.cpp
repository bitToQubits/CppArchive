#include <iostream>
#include <string>
using namespace std;

int main() {
    string able_say;
    string required;
    cin >> able_say;
    cin >> required;

    if (able_say.size() >= required.size()) {
        cout << "go";
    }
    else {
        cout << "no";
    }
}