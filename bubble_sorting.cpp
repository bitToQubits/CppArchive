#include <bits/stdc++.h>
using namespace std;

int main(){
    //Metodo de burbuja: itera a traves de todos los elementos, por cada uno hace pares, y compara estos num. consec.
    //Si estan en un orden incorrecto: a < b && array[a] > array[b] entonces los intercambia.
    //Complejidad temporal O(pow(n,2))
    vector<int>vec = {1, 3, 8, 2, 9, 2, 5, 6};
    int n = vec.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1;j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j], vec[j+1]); //Swap, para intercambiar valores de variables.
            }
        }
    }

    for(auto elem : vec){
        cout << elem << ' ';
    }
}