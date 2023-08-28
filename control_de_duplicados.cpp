#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>numeros = {1,2,3,4,5,6,8,9,2};
    unordered_map<int, int>cantidad;

    for(const auto& numero : numeros){
        cantidad[numero]++;
    }

    for(const auto& elem : cantidad){
        cout << '[' << elem.first << ']' << '=' << elem.second << '\n';
    }
}