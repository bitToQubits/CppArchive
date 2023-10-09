#include <bitset>
#include <iostream>
using namespace std;

int main(){
    bitset<10>b (string("01010001"));
    b[0] = 1;
    b[1] = 1;
    for(int i = 0; i < 10; i++){
        cout << b[i];
    }
}