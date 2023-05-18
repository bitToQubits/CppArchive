/*Curso C++. Ejercicio práctico sencillo. Vídeo 10 de pildorasinformaticas*/

/***************************************************************************/
/***************************************************************************/
/***************************************************************************/

/*Este programa consiste en calcular el presupuesto de madera laminada, 
basandose en la multiplicacion de cantidad y precio, y la suma entre los tipos de madera.
Por ultimo se suma este primer precio, con su correspondiente impuesto.*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Calculadora de instalación de madera laminada." << endl;
  int metrosCalidadAlta;
  int metrosCalidadMedia;
  const float precioCalidadAlta {55.3};
  const float precioCalidadMedia {35.5};
  int iva = 21 / 100;
  
  cout << "¿Cuantos metros quieres instalar con calidad media? \n";
  cin >> metrosCalidadMedia;

  cout << "¿Cuantos metros quieres instalar con calidad alta? \n";
  cin >> metrosCalidadAlta;

  double precio_neto = (metrosCalidadAlta * precioCalidadAlta) + (metrosCalidadMedia * precioCalidadMedia);

  double precio_total = precio_neto + (precio_neto * iva);

  cout << "Presupuesto total de la madera laminada:" << endl << precio_total << endl;
  cout << "Dias validez del presupuesto = 30 días.";
  
}