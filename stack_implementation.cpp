#include <iostream>
#include <vector>
using namespace std;

void push(vector<int>& vector, int num){
    vector.insert(vector.end(), num);
}

void pop(vector<int>& vector){
    vector.erase(vector.begin());
}

int front(vector<int>& vector){
    return *vector.begin();
}

int main(){
    vector<int>numeros = {1,2,3,4,5,6};
    push(numeros, 4);

    cout << front(numeros);
}