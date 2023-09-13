#include <iostream>
using namespace std;

int main(){
    int c = 0;
    float numero;

    while(numero >= 0){
        c++;
        scanf("%d", &numero);
    }

    printf("Hay %d numeros positivos", c);
}