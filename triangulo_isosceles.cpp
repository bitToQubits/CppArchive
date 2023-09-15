#include <iostream>
using namespace std;

int main(){
    const char blanco = ' ';
    const char ast = '*';
    const int num_lineas = 60;

    for(int linea = 1; linea <= num_lineas; linea++){
        // cout << linea << ' ';
        for(int espacio = 0; espacio < num_lineas - linea; espacio++)
            cout << blanco;

        for(int count_as = 1; count_as < 2 * linea; count_as++)
            cout << ast;
        
        cout << endl;
    }
}