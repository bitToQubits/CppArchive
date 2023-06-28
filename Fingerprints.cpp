#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;
    vector<int>sequence;
    vector<int>fingerprints;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> x;
        sequence.push_back(x);
    }

    for(int i = 0; i < m; i++){
        cin >> x;
        fingerprints.push_back(x);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(sequence[i] == fingerprints[j]) cout << sequence[i] << ' ';
        }
    }
}