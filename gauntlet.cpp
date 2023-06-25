#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> gauntlet;
    vector<string> left_gems;
    gauntlet["purple"] = "Power";
    gauntlet["green"] = "Time";
    gauntlet["blue"] = "Space";
    gauntlet["orange"] = "Soul";
    gauntlet["red"] = "Reality";
    gauntlet["yellow"] = "Mind";

    int n;
    cin >> n;
    string x, y;

    for(int i = 0; i < n; i++){
        cin >> x;
        gauntlet[x] = "Founded";
    }

    for (const auto &item : gauntlet) {
        if(gauntlet[item.first] == "Founded") continue;
        left_gems.push_back(gauntlet[item.first]);
    }

    cout << left_gems.size() << '\n';

    for(auto elem : left_gems){
        cout << elem << '\n';
    }

    return 0;
}