#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, a, b;
    bool founded = false;
    cin >> x;

    a = x; b = sqrt(a);

    for (; a > 0; a--) {

		for (b = a; b > 0; b--) {
            if(a * b > x && a % b == 0){
                founded = true;
                break;
            }
            
		}

        if(founded)
            break;

	}

    if(founded)
        cout << a << ' ' << b << '\n';
    else
        cout << -1;

    return 0;
}