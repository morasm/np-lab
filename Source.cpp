#include <conio.h>
#include <iostream>
#include <math.h>
#include "azero.hpp"
#include "bzero.hpp"
#include "czero.hpp"
#include "delta.hpp"

using namespace std;

//deklaracja zmiennych
double a, b, c, delta, x1, x2;
double eps=0.000000001;

int main(){

//pobieramy dane od uzytkownika

	cout << "Podaj wspolczynniki rownania w postaci axx + bx + c = 0" << endl;
	cout << "Podaj a = ";
	cin >> a;
	cout << "Podaj b = ";
	cin >> b;
	cout << "Podaj c = ";
	cin >> c;

//obliczamy delte

delta(a, b, c, delta);

//sprawdzamy blad obliczen zmiennoprzecinkowych

if (abs(delta) < eps) {
			delta = 0.0;
		}



	_getche();
	return 0;
}
