#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cout << "Introduzca su nombre: ";
    getline(cin, name);
    char empty = (name.empty()) ? 'Y' : 'N';

    cout << "Tamano: " << name.size() << '\n'; //.size() : retorna int
    cout << "Esta vacia: " << empty << '\n'; //.empty : retorna bool

    cout << "Modificacion: " << name.insert(0, "@") << '\n'; //Insert para insertar en posicion
    cout << "Correo: " << name.append("@gmail.com") << '\n'; // .append() : para 
                                                    // concatenar string con otro
    cout << "Correo limpio: " << name.erase(0,1) << '\n'; //Inicio y fin (index) para eliminar porcion

    cout << "Index del espacio: " << name.find(' ') << '\n'; //Para encontrar caracteres (index)

    cout << "Primera letra: " << name[0]; //Para accesar elementos.

    name.clear(); //.clear() retorna string vacio.

    return 0;
}