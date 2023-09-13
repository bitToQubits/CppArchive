#include <bits/stdc++.h>
using namespace std;

int contador;
float numero = 0;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    scanf("%f", &numero);
    while(numero >= 0){
        contador++;
        scanf("%f", &numero);
    }
    printf("Numeros enteros positivos: %d", contador);

    return 0;
}