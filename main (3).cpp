/*
  ID: jlbciri1
  TASK:ride
  LANG: C++
  PROG: ride
*/

#include <fstream>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int grupo_num = 1;
int nombre_num = 1;

string grupo_nom;
string nombre_nom;

int main() {
  map<int, char> diccionario;

  int value = 1;

  // Genera el diccionario con el alfabeto
  for (char ch = 'A'; ch <= 'Z'; ++ch) {
    diccionario[value++] = ch;
  }

  ofstream fout("ride.out");
  ifstream fin("ride.in");

  fin >> grupo_nom;
  fin >> nombre_nom;

  for (int b = 1; b <= 27; b++) {
    for (int n = 0; n < grupo_nom.length(); n++) {
      /*cout << diccionario[b];*/
      if (grupo_nom[n] == diccionario[b]) {
        grupo_num *= b;
      }
    }
    for (int a = 0; a < nombre_nom.length(); a++) {
      /*cout << diccionario[b];*/
      if (nombre_nom[a] == diccionario[b]) {
        nombre_num *= b;
      }
    }
  }

  if (nombre_num % 47 == grupo_num % 47) {
    fout << "GO" << endl;
  } else {
    fout << "STAY" << endl;
  }

  return 0;
}