#include <stack>
#include <iostream>
using namespace std;

int main(){
    //En verdad las pilas solo tienen tres funciones miembros que conozca:
    //push, top y pop. metodologia FILO
    stack<int>stackoverflow;
    stackoverflow.push(9);
    stackoverflow.push(1);
    stackoverflow.push(2);
    stackoverflow.push(3);

    cout << stackoverflow.top(); //3
    stackoverflow.pop(); //Se elimina 3.
}