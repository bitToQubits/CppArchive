#include <iostream>
using namespace std;

int main(){
    int ciudad, mayor = 0;
    for(int k = 0; k < 8; k++){
        printf("Ciudad %d\n", k);
        for(int j = 0; j < 3; j++){
            scanf("%d", &ciudad);
            mayor = (mayor < ciudad) ? ciudad : mayor;
        }
        printf("La provincia con la ciudad mas grande contiene poblacion de %d \n", mayor);
    }
}