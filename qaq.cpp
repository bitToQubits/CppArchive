#include <bits/stdc++.h>
using namespace std;

int main(){
    int c = 0;
    string s;
    cin >> s;
    vector<char>l;

    for(int i = 0; i < (int) s.size(); i++){
        if(s[i] == 'Q')
            l.push_back(s[i]);
        else if(s[i] == 'A')
            l.push_back(s[i]);
    }

    for(int i = 0; i < (int) l.size(); i++)
        for(int j = i + 1; j < (int) l.size(); j++)
            for(int k = j + 1; k < (int) l.size(); k++)
                if(l[i] == 'Q' && l[j] == 'A' && l[k] == 'Q')
                    c++;

    cout << c;
}