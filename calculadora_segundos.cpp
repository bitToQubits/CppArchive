#include <iostream>
using namespace std;

int main(){
    int segundos = 0;
    int minuto = 0;
    int hora = 0;
    int residuo = 0;
    scanf("%d", &segundos);
    if(segundos > 0){
        if((hora = segundos / 3600) > 0)
            residuo = segundos % 3600;
        else
            residuo = segundos;

        if((minuto = residuo / 60) > 0)
            residuo = residuo % 60;
        
        segundos = residuo;

        printf("%d %d %d", hora, minuto, segundos);
    }else{
        printf("Input incorrecto! Introducir positivos\n");
    }
}