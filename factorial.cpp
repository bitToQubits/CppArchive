#include <iostream>
using namespace std;

int main(){
    /*Algoritmo factorial*/
    int cont = 1, n;
    float factorial = 1;
    scanf("%d", &n);

    do{
        cont++;
        factorial *= cont;
    }while(cont != n);
    printf("%.2f ", factorial);
}