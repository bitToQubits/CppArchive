#include <bits/stdc++.h>
using namespace std;

class Counter{
    int m_value;

    public:
        int value(){
            return m_value;
        }

        void setValue(int value);
};

void Counter::setValue(int value){
    m_value = value;
}

int main(){
    Counter contador;
    contador.setValue(11);
    cout << contador.value();
    return 0;
}