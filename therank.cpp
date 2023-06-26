#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    int R = a+b+c+d;
    int Ans = 1;

    for(int i = 1; i < n; i++){
        cin >> a >> b >> c >> d;
        if(a+b+c+d > R){
            Ans++;
        }
    }

    cout << Ans;

    /*int n, english, german, math, history;
    double average;
    vector<pair<int, double>> califications;
    cin >> n;

    struct sort_pred {
        bool operator()(const std::pair<int,double> &left, const std::pair<int,double> &right) {
            if(left.second == right.second){
                return left.first < right.first;
            }else{
                return left.second > right.second;
            }
        }
    };

    for(int i = 1; i <= n; i++){
        cin >> english >> german >> math >> history;
        average = (float) (english + german + math + history) / 4;
        cout << average << '\n';
        califications.push_back(make_pair(i, average));
    }

    cout << "Before\n";
    for(int i = 0; i <= n; i++){
        cout << califications[i].first << ' ' << califications[i].second << endl;
    }

    sort(califications.begin(), califications.end(), sort_pred());

    cout << "After\n";
    for(int i = 0; i <= n; i++){
        cout << califications[i].first << ' ' << califications[i].second << endl;
    }

    for(int i = 0; i < n; i++){
        if(califications[i].first == 1){
            cout << i+1;
        }
    }*/
}