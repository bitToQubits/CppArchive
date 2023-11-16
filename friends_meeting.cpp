#include <bits/stdc++.h>
using namespace std;

int main(){
    int friend_1;
    int friend_2;
    int distance;
    cin >> friend_1 >> friend_2;

    distance = abs(friend_1 - friend_2);

    friend_1 = distance / 2;
    friend_2 = distance - friend_1;

    friend_1 = (friend_1 * (friend_1 + 1)) / 2;
    friend_2 = (friend_2 * (friend_2 + 1)) / 2;

    cout << friend_1 + friend_2;

    return 0;
}