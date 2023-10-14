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
	int x;
	int y;
	cout << "Pod poczatek zakresu: ";
	cin >> x;
	cout << "Podaj koniec zakresu: ";
	cin >> y;
	int raz = (x > y) ? y : x;
	int dwa = (x > y) ? x : y;
	cout << "Liczby zaprzyjaznione z zakresu " << x << " do " << y << " to: " << endl;
	while (raz <= dwa) {
		int suma = suma_dzielnikow(raz);
		if (raz == suma)
		{
			raz++;
			continue;
		}
		if (suma_dzielnikow(suma) == raz && raz > suma) {
			cout << "Para: " << raz << " " << suma << "\n";
		}
		raz++;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
