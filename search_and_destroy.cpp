#include <bits/stdc++.h>
using namespace std;

int main(){
    //Algorithm Destroy and Search (Blank Spaces)
    ios::sync_with_stdio(0); 
    cin.tie(0);

    string text;
    getline(cin, text);
    int n = text.size();

    if(text.empty() == false){
        for(int i = 0; i < n; i++){
            if(text[i] == ' '){
                //.erase() elimina un caracter (1) a partir del index (i)
                text.erase(i,1);
            }
        }
        cout << text << endl;
    }else{
        cout << "Por favor introducir texto válido.\n";
    }
}