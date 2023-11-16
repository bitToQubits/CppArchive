#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<char, int>letras;

    int n, k;
    string s;
    int r = 0;

    cin >> n >> k >> s;

    int minimo = pow(2, 31) - 1;

    for(int i = 0; i < n; i++){
        letras[s[i]]++;
    }

    for(const auto elem : letras){
        minimo = min(elem.second, minimo);
    }

    for(auto x : letras){
        letras[x.first] = x.second - (x.second - minimo);
    }

    int i = 0;
    bool continuar = true;
    for(char letra = 'A'; i < k-1; i++,letra++){
        //cout << letra << "letra" << '\n';
        if(letras[letra] != letras[static_cast<char>(letra + 1)]){
            continuar = false;
        }
    }

    if(continuar){
        for(const auto elem : letras){
            r+= elem.second;
        }
        cout << r << '\n';
    }else{
        cout << r << '\n';
    }

    return 0;
}