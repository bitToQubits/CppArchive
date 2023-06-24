#include <bits/stdc++.h>
using namespace std;

int main(){
    double x = 1, y=4, result;

    result = min(x,y); //Retorna el menor de dos expresiones.
    cout << result << '\n';

    result = max(x,y); //Retorna el mayor de dos expresiones.
    cout << result << '\n';

    result = pow(2,4); //Elevar base al exponente.
    cout << result << '\n';

    result = sqrt(9); //Raiz cuadrada;
    cout << result << '\n';

    result = cbrt(64); //Raiz cubica.
    cout << result << '\n';

    result = abs(-9); //Valor absoluto;
    cout << result << '\n';

    result = round(3.14); //Redondear
    cout << result << '\n';

    result = ceil(3.14); //Redondear hacia arriba.
    cout << result << '\n';

    result = floor(3.99); //Redondear hacia abajo.
    cout << result << '\n';

    return 0;
}