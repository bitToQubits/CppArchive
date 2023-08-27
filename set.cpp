#include <set>
#include <iostream>
using namespace std;

int main(){
    set<int>conjunto;
    conjunto.insert(9);
    conjunto.insert(8);
    conjunto.insert(7);
    conjunto.insert(6);
    conjunto.erase(8);
    cout << *++conjunto.begin();
}