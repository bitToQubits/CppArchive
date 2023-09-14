#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,d,x1,x2;
    scanf("%f %f %f", &a,&b,&c);

    if(a != 0){
        d = b * b - 4 * a * c;
        if(d > 0){
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Las raices son: %f %f", x1, x2); 
        }else{
            if(d == 0){
                x1 = -b / (2 * a);
                printf("Raices repetidas: %f", x1);
            }else{
                x1 = -b / (2 * a);
                x2 = sqrt(abs(d)) / (2 * a);
                printf("Raices complejas: %f %f", x1, x2);
            }
        }
    }else{
        printf("Imposible calcular");
    }
}