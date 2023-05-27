#include <iostream>
using namespace std;

//Estructura basica de un programa 001
int main()
{
	string salute = "Hello world";
	cout << salute << endl;
	salute = "GoodBye World!";
	cout << salute << endl;
}

//Variables y tipos
int variables()
{
	int numero = {30};
	numero = numero + 69;
	
	double decimal =  99.5;
	
	char letra = 'a';
	
	string cadena = "Cadena de caracteres";
	
	bool booleano = false;
	
	auto resultado = numero + decimal;
	
	cout << numero << endl << decimal << endl << resultado << endl << letra << endl << cadena << endl << booleano;
	
}

int constantes() {
  /*Enteros numericos*/
  int const octal{0113};
  int const ndecimal{75};
  int const hexadecimal{0x4b};
  /*Tipos*/
  int const entero{89u};         /*Unsigned*/
  int const entero_long{89l};    /*Long*/
  int const ent_long_long{89ll}; /*Long Long*/

  /*Float, coma flotante*/
  double const pi = 3.14;
  double const avogadro = 6.02e23; /*6.02^10*23*/
  double const electron = 1.6e-19; /*1.6 ^10*-19*/

  /*Tipos*/
  double const decimal_l = 3.14859e10L; /*Long double*/
  double const decimal = 2.67f;         /*Float*/

  /*Char y string*/
  char const foo = 'y';               /*Char*/
  string const bar = "yellow yrowld"; /*String*/
  string const mensaje = "Hola al mundo de la \
programacion";                        /*Para romper linea*/
  string const up = u8"(↑)";          /*Para permitir caracteres unicode 8*/
  string const down =
      R"7*&&(↓)7*&&"; /*Raw string para ignorar caracteres esp.*/

  /*Booleanos*/
  bool const Verdadero = true;
  bool const Falso = false;

  /*Null pointer*/
  int *p = nullptr;

/*Definiciones del preprocesador. Consite en definir un identificador, luego una
 * secuencia de caracteres, y cada vez que se encuentra el ident. se reemplazara
 * por esta secuencia*/
#define NewLine '\n'
#define Tab '\t'
#define vertTab '\v'
#define alert '\a'
#define backlash '\\'
#define s_quote '\''
#define d_quote '\"'
}
