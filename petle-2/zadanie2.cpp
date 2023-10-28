
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string haslo = "ala ma kota";
	string odpowiedz;
	while (odpowiedz != haslo) {
		cout << "Podaj haslo: " << endl;
		getline(cin, odpowiedz);
		if (odpowiedz != haslo) cout << "Haslo nieprawidlowe, sproboj ponownie" << endl;
	}
	cout << "Haslo prawidlowe, koniec programu";
}

