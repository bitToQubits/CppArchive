#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    vector<string>palabras;
    string palabra;
    cout << "Introduce palabras: ";
    do{
        cin >> palabra;
        if(palabra != "/") palabras.push_back(palabra);
    } while (palabra != "/");

    if(! palabras.empty() ){
        cout << "Tu oracion es: \n";
        for(auto it = palabras.begin(); it != palabras.end(); it++){
            cout << *it << ' ';
        }
    }else{
        cout << "No has introducido nada";
    }
}