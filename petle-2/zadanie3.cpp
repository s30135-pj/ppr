
#include <iostream>
#include <string>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int komp;
	int gracz = 0;
	string opcje[4]{ "","Kamien","Nozyce","Papier" };
	while (gracz != 9) {
		cout << "Wpisz 1: kamien, 2: nozyce, 3: papier, 9: koniec gry" << endl;
		cin >> gracz;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(200, '\n');
			cout << "Wpisz numer" << endl;
			continue;
		}
		komp = rand() % 3 + 1;
		switch (gracz) {
		case 1:
		case 2:
		case 3:
			cout << "wybrales " << opcje[gracz] << endl;
			cout << "komputer wybral " << opcje[komp] << endl;
			cout << ((gracz == komp) ? "Remis" : (gracz == 1 && komp == 2) ? "Wygrales" : (gracz == 2 && komp == 3) ? "Wygrales" : (gracz == 3 && komp == 1) ? "Wygrales" : "Przegrales");
			cout << endl;
			break;
		default:
			cout << "Zly numer" << endl;
			break;
		}
	}
	cout << "Koniec gry" << endl;
}

