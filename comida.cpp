#include <iostream>
#include <vector>
using namespace std;

vector<string>componentes_comida;
void obtenerAlimentos(){
    string alimento;
    do{
        cin >> alimento;
        if(alimento != "/exit" ){
            componentes_comida.push_back(alimento);
        }
    }while(alimento != "/exit");
}

int main(){
    obtenerAlimentos();
    if(componentes_comida.size() == 0){
        cout << "No introduciste nada!";
    }else{
        cout << "Tu comida esta lista! ";
        for(auto elem : componentes_comida){
            cout << elem << ", ";
        }
    }
}