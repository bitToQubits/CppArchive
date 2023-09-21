#include <iostream>
using namespace std;

void revertirNumero(int n){
    if(n / 10 > 0){
        cout << n % 10;
        revertirNumero(n / 10);
    }else{
        cout << n;
    }
}

int main(){
    revertirNumero(123);
}