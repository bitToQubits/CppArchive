#include <iostream>
#include <string>
using namespace std;

/*Uso de get_line(), scan_f, printf, type converter, sizeof*/
int main() {
	int a, c;
	float b;
	string mathematician;
	scanf_s("%d %f", &a, &b);
	c = int(b + 2);
	printf("%s %d %d \n", "Tus numeros han sido incrementados en 2:",a + 2,c);
	printf("%s %d %d", "Size de los numeros", sizeof(a), sizeof(c));
	
	/*No se pueden utilizar scan_f_s y getline al mismo tiempo*/
	/*cout << "Escribe el nombre de tu matematico favorito ";*/
	/*getline(cin, mathematician);*/
	/*cout << "Me gusta tambien " << mathematician << "!";*/
	return 0;
}