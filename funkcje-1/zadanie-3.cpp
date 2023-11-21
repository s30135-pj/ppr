#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
#include<string>

using namespace std;


void pole(double a) {
	cout << "Pole kwadratu to " << a * a << endl;
}
void pole(double a, double b) {
	cout << "Pole prostokata to " << a * b << endl;
}

void pole(double a, double b, double c) {
	if (a + b > c && c + b > a && a + c > b) {
		double p = (a + b + c) / 2;
		double w = sqrt(p * ((p - a) * (p - b) * (p - c)));
		cout << "Pole trojkata to " << w << endl;
	}
	else {
		cout << "To nie jest trojkat";
	}
}
void pole(double r, double *pi) {
	cout << "Pole kola to " << *pi * r * r << endl;
}
int main()
{
	int r = 0;
	cout << "Wybierz rodzaj figury: kwardat(1), prostokat(2), trojkat(3), kolo(4): ";
	cin >> r;
	double pi = M_PI;
	int a, b, c;
	switch (r) {
	case 1:
		cout << "Podaj dlugosc boku kwadratu: ";
		cin >> a;
		pole(a);
		break;
	case 2:
		cout << "Podaj dlugosci bokow a i b prostokata: ";
		cin >> a >> b;
		pole(a, b);
		break;
	case 3:
		cout << "Podaj dlugosci trzech bokow trojkata: ";
		cin >> a >> b >> c;
		pole(a, b, c);
		break;
	case 4:
		cout << "Podaj promien kola: ";
		cin >> a;
		pole(a, &pi);
		break;
	default:
		cout << "Bledny numer figury.";
	}
}

