#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a = 0;
    double n_articles;
    int impact_factor;
    bool running = true;
    cin >> n_articles >> impact_factor;

    while (running) {
        a++;
        if (ceil(a / n_articles) == impact_factor) {
            running = false;
        }
    }

    cout << a;

}