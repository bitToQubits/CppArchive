#include <bits/stdc++.h>
using namespace std;

int main(){
    struct{
        int edad;
        string nombre;
    } persona;
    persona.edad = 14;
    persona.nombre = "Hola";

    printf("Edad %i, nombre %s", persona.edad, persona.nombre.c_str());
}