/*
Alice and Bob are playing a new game of stones. There are N stones placed on the ground, forming a sequence. 
The stones are labeled from 1 to N.

Alice and Bob in turns take exactly two consecutive stones on the ground until there are no consecutive 
stones on the ground. That is, each player can take stone i and stone i+1, where 1 <= i <= N-1.
If the number of stone left is odd, Alice Wins. Otherwise, Bob wins.

Assume both Alice and Bob play optimally and Alice plays first, do you know who the winner is?
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Bob";
    }
    else {
        cout << "Alice";
    }
}