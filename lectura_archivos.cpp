#include <iostream>
#include <set>
using namespace std;


int main(){
    freopen("C:/new_xampp/htdocs/cplusplus/CppArchive/texto.txt", "r", stdin); //El archivo que sirve de input
    string a; //Nuestro contenedor
    set<char>letras; //El conjunto que almacenara las letras unicas que contiene el input
    while(cin >> a){ //Leemos hasta que no se puedan insertar mas datos a "a"
        for(char c : a) //iteramos a traves del input
            letras.insert(c); //Insertamos al conjunto
    }
    for(auto c : letras) //Iteramos y mostramos en pantalla el conjunto.
        cout << c << ' '; 
}