
#include <iostream>
using namespace std;

void ciagi(double pierwszy, double czynnik, int ilosc) {
	int sumaA = 0;
	int sumaG = 0;
	int wyrazA = pierwszy;
	int wyrazG = pierwszy;
	for (int i = 0; i < ilosc; i++) {
		sumaA += wyrazA;
		wyrazA += czynnik;
		sumaG += wyrazG;
		wyrazG *= czynnik;
	}
	cout << endl;
	cout << "Suma elementow ciagu arytmetycznego " << sumaA << endl;
	cout << "Suma elementow ciagu geometrycznego " << sumaG << endl;
}

int main()
{
	double pierwszy, czynnik;
	int ilosc;
	cout << "Wpisz pierwszy element ciagu ";
	cin >> pierwszy;
	cout << "Wpisz roznice / iloraz ciagu ";
	cin >> czynnik;
	cout << "Wpisz liczbe wyrazow ciagu ";
	cin >> ilosc;
	ciagi(pierwszy, czynnik, ilosc);
}