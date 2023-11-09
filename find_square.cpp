#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    char s;
    tuple<int, int>first(0,0);
    tuple<int, int>last(0,0);
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> s;
            if(s == 'B' && get<0>(first) == 0)
                first = make_tuple(i, j);
            else if(s == 'B')
                last = make_tuple(i, j);
        }
    }

    if(get<0>(last) == 0){
        cout << get<0>(first) << ' ' << get<1>(first) << '\n';
    }
    else{
        cout << (get<0>(first) + get<0>(last)) / 2 << ' ';
        cout << (get<1>(first) + get<1>(last)) / 2 << '\n';
    }


    return 0;
}