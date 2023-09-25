#include <iostream>
#include <cmath>
using namespace std;

int sumaAritmetica(int n){
    //(N * (N + 1)) / 2
    int z = 0;

    for(int i = 1; i <= n; i++){
        z += i;
    }

    return z;
}

long sumaAritmeticaElevada(long n){
    //(n(n + 1)(2*n + 1)) / 6
    int z = 0;

    for(int i = 1; i <= n; i++){
        z += pow(i, 2);
    }

    return z;
}

int main(){
    cout << sumaAritmetica(9) << '\n';
    cout << sumaAritmeticaElevada(10);
    return 0;
}