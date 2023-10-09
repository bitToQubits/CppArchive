#include <set>
#include <iostream>
using namespace std;

int main(){
    set<int>c;
    c.insert(10);
    c.insert(1);
    c.insert(2);
    c.insert(-1);
    c.insert(8);
    c.insert(-2);
    int x = 2;
    auto it = c.lower_bound(x);
    if(it == c.begin()){
        cout << *it << '\n';
    }else if(it == c.end()){
        cout << *it-- << '\n';
    }else{
        int a = *it; it--;
        int b = *it;
        cout << "x: " << x << " b:" << b << " a:" << a << '\n';
        if (x - b < a - x){
            cout << "'Se utilizo b'" << '\n';
            cout << b << '\n';
        }else{
            cout << "'Se utilizo a'" << '\n';
            cout << a << '\n';
        }
    }
}