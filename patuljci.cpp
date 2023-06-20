#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, sum = 0, n1,n2;
    vector<int>dwarfes;
    bool executing = true;

    for (int i = 0; i < 9; i++) {
        cin >> x;
        dwarfes.push_back(x);
        sum += dwarfes[i];
    }

    int sobrante = sum - 100;
    /*Declarar variables y saltarselas. Definir loop 1: i < 8; loop 2: i +1*/
    /*Cuando elementos siguientes no necesitan evaluar anteriores, porque los anteriores los evaluaron a ellos*/
    for (int i = 0; i < 8 && executing == true; i++) {
        for (int b = i + 1; b < 9; b++) {
            if (dwarfes[i] + dwarfes[b] == sobrante) {
                executing = false;
                n1 = i;
                n2 = b;
                break;
            };
        }
    }
    

    for (int i = 0; i < 9; i++) {
        if (n1 == i || n2 == i) continue;
        cout << dwarfes[i] << '\n';
    }
}