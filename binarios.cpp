#include <iostream>
using namespace std;
//Si n < 2 imprimimos n (que sera 1), en caso contrario imprimimos
//1 si n es impar, 0 si n es par, cuando la recursion regrese de 1 a n
void imprime_binario ( int n ) {
    if(n>=2){
        imprime_binario( n /2 );
        printf ("%d",n%2);
    } else {
        printf ("%d",n);
    }
}

int main(){
imprime_binario(2);
}