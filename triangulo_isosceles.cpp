#include <iostream>
using namespace std;

int main(){
    // datos locales...
        const int num_lineas = 5;
        const char blanco = ' ';
        const char asterisco = '*';
        // comienzo de una nueva línea
        cout << endl;
        // dibujar cada línea: bucle externo
       for(int fila = 1; fila <= num_lineas; fila++){
            for(int espacio = 0; espacio < num_lineas - fila; espacio++){
                cout << blanco;
            }

            for(int count_as = 1; count_as < 2 * fila; count_as++){
                cout << asterisco;
            }
            cout << endl;
       }
}