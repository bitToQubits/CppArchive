#include <map>
#include <iostream>
#include <string>
using namespace std;

int main(){
    map<string, int>mapa;
    mapa["Jorge"] = 16;
    mapa["Ashley"] = 15;

    cout << mapa["Jorge"] << '\n';
    mapa["Ashley"] = 16;
    cout << (*mapa.begin()).second << '\n';
    mapa.erase("Ashley");
    cout << mapa.size();
}