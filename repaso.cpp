#include <iostream>
using namespace std;

int sum_in_range(int inicio, int final);

int main(){
    cout << sum_in_range(2, 2);
}

int sum_in_range(int inicio, int final){
    if(final >= inicio){
        return final += sum_in_range(inicio, final - 1);
    }else{
        return 0;
    }
}