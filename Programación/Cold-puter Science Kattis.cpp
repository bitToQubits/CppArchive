/*

    We’re not going to sugar-coat it: Chicago’s winters can be rough. 
    The temperatures sometimes dip to uncomfortable levels and, 
    after last year’s “polar vortex”, the University of Chicago Weather Service 
    wants to find out exactly how bad the winter was. 
    More specifically, they are interested in knowing the total number of days in 
    which the temperature was below zero degrees Celsius.

*/

#include <iostream>
using namespace std;

int main() {
    int n, y;
    int counter = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> y;
        if (y < 0) {
            counter++;
        }
    }

    cout << counter;
}