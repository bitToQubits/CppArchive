#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> scores;
    int n;
    int score;
    int previous_score;
    int winners = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> score;

        if(scores.find(score) == scores.end() && score > 0)
            winners++;

        scores.insert(score);
    }

    cout << winners;

    return 0;
}