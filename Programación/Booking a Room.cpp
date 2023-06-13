#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>habitaciones; //Cada numero de las Habitaciones ocupadas
    int r, n, val = 0,x; //R = habitaciones total, n habitaciones ocupadas, val habitacion no ocupada
    cin >> r >> n; //Obteniendo datos de entrada
    for (int i = 0; i < n; i++) { //Iterando datos de entrada para el array;
        cin >> x;
        habitaciones.push_back(x);
    }
    
    if (r == n) cout << "too late"; //Si las habitaciones ocupadas equivalen al total, no hay desocupadas.
    else if (n == 1) { //Si solo hay una habitacion ocupada
        if (habitaciones[0] == 0) cout << 1; //Si la primera resulta ser la numero 0, la nro 1 esta desocupada
        else if (habitaciones[0] > 1) cout << habitaciones[0] - 1; //Si la primera es mayor que 1 
        else if (habitaciones[0] == 1) cout << habitaciones[0] + 1; //No podemos restar por menos 
    }
    else if (n == 0) {
        cout << 1; //La nro 1 esta desocupada.
    }
    else {
        bool founded = false; //Variable para terminar el loop dependiendo si hay cupo.
        for (int i = r; i > 0 && founded == false; i--) { //Empezamos desde el numero total de habitaciones decreciendo.
            for (int b = 0; b < n; b++) { //Iteramos por todo el array.
                if (i == habitaciones[b]) break; //Si el numero de habitacion es equivalente a la ocupada, no seguimos iterando por ese numero.
                if (b == n - 1) { //Si no se ha repetido el n. de habitacion y estamos en el ultimo elemento del array bingo!
                    val = i; //Este numero de habitacion esta vacio, desocupado.
                    founded = true; //Para terminar el loop.
                }
            }

        }
        cout << val; //Imprimimos en pantalla.
    }
}
