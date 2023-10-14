// petle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int suma_dzielnikow(int l) {
	int wynik = 1;
	for (int i = 2; i <= sqrt(l); i++) {
		if (l % i == 0) {
			wynik += i;
			wynik += l / i;
		}
	}
	return wynik;
}

int main()
{
	int x{0}, y{0};
	while (x <= 0 || y <= 0) {
		cout << "Podaj poczatek zakresu: ";
		cin >> x;
		cout << "Podaj koniec zakresu: ";
		cin >> y;
		if (x <= 0) cout << "Mozna podawac liczby tylko wieksze od 0" << endl;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Mozesz wpisac tylko liczbe" << endl;
		}
	}
    int poczatek = (x > y) ? y : x;
	int koniec = (x > y) ? x : y;
	cout << "Liczby zaprzyjaznione z zakresu " << poczatek << " do " << koniec << " to: " << endl;
	while (poczatek <= koniec) {
		int suma = suma_dzielnikow(poczatek);
		if (poczatek == suma)
		{
			poczatek++;
			continue;
		}
		if (suma_dzielnikow(suma) == poczatek && poczatek > suma) {
			cout << "Para: " << poczatek << " " << suma << endl;
		}
		poczatek++;
	}
}