

#include <iostream>
using namespace std;
bool isPrime(int l) {
	for (int i = 2; i * i <= l; i++) {
		if (l % i == 0) return false;
	}
	return true;
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
	cout << "Liczby pierwsze od " << poczatek << " do " << koniec << endl;
	for (int i = poczatek; i <= koniec; i++) {
		if (isPrime(i)) cout << i << ' ';
	}
}