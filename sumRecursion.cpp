#include <iostream>
using namespace std;

int sumArithmetic(int n){
    if(n > 0){
        return n + sumArithmetic(n - 1);
    }else{
        return 0;
    }
}

int main(){
    cout << sumArithmetic(3);
}