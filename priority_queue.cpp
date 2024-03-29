#include <queue>
#include <iostream>
#include <vector>
using namespace std;

class Compare{
    public: 
        bool operator () (int a, int b){
            return abs(a) > abs(b);
        }
};

int main(){
    priority_queue<int, vector<int>, Compare>prioridad;
    prioridad.push(1);
    prioridad.push(2);
    prioridad.push(4);
    prioridad.push(-1);
    prioridad.push(5);
    prioridad.push(-8);
    prioridad.push(-9);
    prioridad.pop();
    cout << prioridad.top();
}