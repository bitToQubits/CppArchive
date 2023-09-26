#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int n){
    int r = (pow((1 + sqrt(5)),n) - pow((1 - sqrt(5)), n)) / (pow(2,n) * sqrt(5));

    return r;
}

int main(){
    cout << fibonacci(4);
    return 0;
}