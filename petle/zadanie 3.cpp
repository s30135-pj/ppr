
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Podaj liczbe naturalna n :";
	cin >> n;
	if (n == 1) {
		cout << "1 liczba w  ciagu fibonacciego to 0";
		return 0;
	}
	int pierwsza = 0;
	int druga = 1;
	for (int i = 2; i < n; i++) {
		int chwilowa = druga;
		druga += pierwsza;
		pierwsza = chwilowa;
	}
	cout << n << " liczba w ciagu fibonnaciego to: " << druga;
}
