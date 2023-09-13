#include <iostream>
using namespace std;

int main(){
    int numero, digitoSig;
    scanf("%d", &numero);
    
    do{
        digitoSig = numero % 10;
        printf("%d", digitoSig);
        numero /= 10;
    }while(numero > 0);
}