
#include <iostream>
using namespace std;

int main()
{
	int n = -1;
	while (n < 0) {
		cout << "Podaj liczbe naturalna n :";
		cin >> n;
		if (n < 0) cout << "Mozna podawac liczby tylko wieksze lub rowne 0" << endl;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Mozesz wpisac tylko liczbe" << endl;
		}
	}
	if (n == 0) {
		cout << "0 liczba w  ciagu fibonacciego to 0";  //wczesniej bylo ze 1-sza ale jakos w internecie przeczytalem ze to jest zerowa liczba fibonnaciego, stad zmiana
		return 0;
	}
	long long pierwsza = 0;
	long long druga = 1;
	for (int i = 1; i < n; i++) {
		long long chwilowa = druga;
		druga += pierwsza;
		pierwsza = chwilowa;
	}
	cout << n << " liczba w ciagu fibonnaciego to: " << druga;
}