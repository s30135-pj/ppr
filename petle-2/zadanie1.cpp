#include <iostream>
using namespace std;
int main()
{
	double roznica;
	double ilosc;
	double pierwszy;
	cout << "Podaj pierwsza liczbe ciagu, ilosc liczb i roznice: ";
	cin >> pierwszy >> ilosc >> roznica;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(200, '\n');
		cout << "Wpisz wartosci liczbowe" << endl;
		cout << "Podaj pierwsza liczbe ciagu, ilosc liczb i roznice: ";
		cin >> pierwszy >> ilosc >> roznica;
	}
	double ostatni = pierwszy + roznica * (ilosc - 1);
	cout << "Suma ciagu arytmetycznego to " << (pierwszy + ostatni) / 2 * ilosc;
}

