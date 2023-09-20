#include <iostream>
using namespace std;

int main(){
    int x1 = 1;
    int x2 = 1;
    int result = x1 + x2;
    cout << x1 << '\n' << x2 << '\n' << result << '\n';
    for(int i = 1; i < 40; i++){
        x1 = x2;
        x2 = result;
        result = x1 + x2;
        cout << result << '\n';
    }
}