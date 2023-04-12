//  En este problema creamos un codigo donde se muestra si el numero es positivo, negativo o cero.
//Autores: Christian y Gustavo.

#include <iostream>
using namespace std;

int main() {

	float number;

	cout << "Escriba un numero." << endl;
	cin >> number;

	if (number < 0)
		cout << " El numero que ha escogido es negativo." << endl;

	if (number > 0)
		cout << "El numero que ha escogido es posiitivo" << endl;


	if (number == 0)
		cout << "El numero que ha escogido igual a cero" << endl;


	return 0;
}