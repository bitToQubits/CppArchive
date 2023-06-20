/*
  ID: jlbciri1
  TASK: gift1
  LANG: C++
*/

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int NP;
string name;
string gifter;
int money;
int n_recipients;

int main() {
  vector<string> insertOrder;
  unordered_map<string, int> group;

  ofstream fout("gift1.out");
  ifstream fin("gift1.in");

  fin >> NP;

  for (int i = 1; i <= NP; i++) {
    fin >> name;
    group[name] = 0;
    insertOrder.push_back(name);
  }

  for (int a = 1; a <= NP; a++) {
    fin >> gifter;
    fin >> money >> n_recipients;

    for (int b = 1; b <= n_recipients; b++) {
      fin >> name;
      if (n_recipients != 0) {
        group[name] += money / n_recipients;
      }
    }

    group[gifter] -= money;
    if (n_recipients != 0) {
      group[gifter] += money % n_recipients;
    }
  }

  // Print the final results.
  for (int i = 0; i < insertOrder.size(); ++i) {
    const string &s = insertOrder[i];
    fout << s << ' ' << group[s] << '\n';
  }

  return 0;
}