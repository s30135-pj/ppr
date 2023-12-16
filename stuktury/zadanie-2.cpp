
#include <iostream>
#include <cmath>
using namespace std;

// Mozna dac wielokrotne wywolywanie menu, usuwajac zakonczenie petli po wyswietleniu, sortowane dane zapisac w osobnej tabeli, tak aby dostep byl zawsze do obu
// Jesli chcemy mozemy tez wrzucic wpisywanie w petle, za kazdym razem usuwajac tabele i na nowo ja tworzac

struct Osoba {
	string imie;
	string nazwisko;
	int wiek;
};
void sortuj(Osoba tab[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (tab[j].nazwisko > tab[j + 1].nazwisko) {
				swap(tab[j], tab[j + 1]);
			}
			else if (tab[j].nazwisko == tab[j + 1].nazwisko) {
				if (tab[j].imie > tab[j + 1].imie) {
					swap(tab[j], tab[j + 1]);
				}
				else if (tab[j].imie == tab[j + 1].imie) {
					if (tab[j].wiek > tab[j + 1].wiek) {
						swap(tab[j], tab[j + 1]);
					}
				}
			}
		}
	}
}
void wypisz(Osoba tab[], int pocz = 0, int koniec = 0) {
	if (koniec == 0) koniec = tab[0].wiek;
	if (pocz > koniec) {
		int temp = pocz;
		pocz = koniec;
		koniec = temp;
	}
	for (int i = pocz + 1; i <= koniec; i++) {
		cout << "Imie: " << tab[i].imie << " Nazwisko: " << tab[i].nazwisko << " Wiek: " << tab[i].wiek << endl;
	}
}
void nie_starsze_niz(Osoba tab[], int r, int wiek) {
	for (int i = 1; i < r; i++) {
		if (tab[i].wiek <= wiek)
			cout << "Imie: " << tab[i].imie << " Nazwisko: " << tab[i].nazwisko << " Wiek: " << tab[i].wiek << endl;
	}
}



int main() {
	int rozmiar = 0;
	cout << "Wpisz ile osob chcesz wpisac ";
	cin >> rozmiar;
	Osoba* tab = new Osoba[rozmiar + 1];
	Osoba wielkosc = { "sfd", "Sf", rozmiar };
	tab[0] = wielkosc;
	for (int i = 1; i < rozmiar + 1; i++) {
		Osoba os;
		cout << "Wpisz imie ";
		cin >> os.imie;
		cout << "Wpisz nazwisko ";
		cin >> os.nazwisko;
		cout << "Wpisz wiek ";
		cin >> os.wiek;
		tab[i] = os;
	}
		int komenda = 0;
		while (komenda != 9) {
			cout << "Wybierz opcje wyswietl wszystko (1), wyswietl czesc (2), koniec(9) ";
			cin >> komenda;
			if (komenda == 1 || komenda == 2) {
				string sp;
				cout << "Czy posortowane t/n/wroc ";
				cin >> sp;
				if (sp == "wroc") continue;
				if (sp == "t") sortuj(tab, rozmiar);
			}
			if (komenda == 1) {
				if (rozmiar != 0) {
					wypisz(tab);
					break;
				}
			}
			if (komenda == 2) {
				cout << "Czy podac zakres indeksow(1), czy maksymalny wiek(2), czy wrocic(3), czy wyjsc(9): ";
				cin >> komenda;
				if (komenda == 3) continue;
				if (komenda == 1) {
					int p, k;
					cout << "Podaj poczatek i koniec zakresu z ktorego wyswietlic indeksy: ";
					cin >> p >> k;
					if (p > rozmiar) p = rozmiar;
					if (k > rozmiar) k = rozmiar;
					wypisz(tab, p, k);
					break;
				}
				else if (komenda == 2) {
					int w;
					cout << "Podaj wiek do ktorego ma wyswietlic: ";
					cin >> w;
					nie_starsze_niz(tab, rozmiar, w);
					break;
				}
			}
		}
	
	delete[] tab;


}