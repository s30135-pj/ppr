
#include <iostream>
using namespace std;

int wynik[2][2];
int macierz1[2][3]{ {10, 20, -5} , {4, 3, 2} };
int macierz2[3][2]{ {5, 3}, {2,1}, {-6, -4} };
void mnozenie_macierzy() {
	wynik[0][0] = macierz1[0][0] * macierz2[0][0] + macierz1[0][1] * macierz2[1][0] + macierz1[0][2] * macierz2[2][0];
	wynik[0][1] = macierz1[0][0] * macierz2[0][1] + macierz1[0][1] * macierz2[1][1] + macierz1[0][2] * macierz2[2][1];
	wynik[1][0] = macierz1[1][0] * macierz2[0][0] + macierz1[1][1] * macierz2[1][0] + macierz1[1][2] * macierz2[2][0];
	wynik[1][1] = macierz1[1][0] * macierz2[0][1] + macierz1[1][1] * macierz2[1][1] + macierz1[1][2] * macierz2[2][1];
}

int main()
{
	mnozenie_macierzy();
	cout << wynik[0][0] << ' ' << wynik[0][1] << endl;
	cout << wynik[1][0] << ' ' << wynik[1][0];
}