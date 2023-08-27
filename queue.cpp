#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue<int>cola;
    cola.push(9);
    cola.push(1);
    cola.push(2);
    cola.push(3);
    cout << "En el frente: " << cola.front() << " En la cola: " << cola.back();
    cola.pop(); //Eliminamos el primero en la fila/cola.
    if(! cola.empty() ){
        cout << "Hay"<< cola.size() << "numeros en la cola. El del frente se fue";
    }
}