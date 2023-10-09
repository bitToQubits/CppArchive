#include <bits/stdc++.h>
using namespace std;

struct P{
    int x,y;
    P(int x1, int y1){
        x = x1;
        y = y1;
    }
    bool operator<(const P &p){
        if(x != p.x) return x < p.x;
        else return y < p.y;
    }
};

bool comp(string a, string b){
    if(a.size() != b.size()) return a.size() > b.size();
    return a < b;
}

int main(){
    // vector<int>vec = {3,2,5,5,8,9,-1,1,2,3,4};
    // sort(vec.begin(), vec.end());
    // for(auto elem : vec){
    //     cout << elem << ' ';
    // }
    // int n = 5;
    // int num[5] = {5,4,3,2,1};
    // sort(num, num + n);
    // for(int i = 0; i < n; i++){
    //     cout << num[i] << ' ';
    // }
    // string s = "monkey";
    // sort(s.begin(), s.end());
    // cout << s;
    // vector<pair<int,int>>v;
    // v.push_back({1,1});
    // v.push_back({1,3});
    // for(auto elem : v){
    //     cout << elem.first << ' ';
    // }
    // vector<P>lol;
    // lol.push_back(P(1,5));
    // lol.push_back(P(1,-1));
    // sort(lol.begin(), lol.end());
    // for(P elem : lol){
    //     cout << elem.y << '\n';
    // }
    // vector<string>stringss;
    // stringss.emplace_back("Holaa");
    // stringss.emplace_back("Pepa la cerdita oink oink");
    // sort(stringss.begin(), stringss.end(), comp);
    // for(auto elem : stringss){
    //     cout << elem << ' ';
    // }
    int k = 0;
    int n = 6;
    int numeros[n] = {1,2,3,4,5,6};
    cout << 'k' << '\t' << 'b' << '\n';
    for(int b = n / 2; b >= 1; b /= 2){
        while(b + k < n && numeros[k + b] <= n) k+=b;
        cout << k+b << '\n';
        cout << k << '\t' << b << '\n';
    }

    if(numeros[k] == 6)
        cout << "Se encontro a 6 en index " << k;
}