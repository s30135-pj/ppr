#define _USE_MATH_DEFINES
#include <iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int euklides_r(int a, int b) {
	if (a == b) {
		cout << "fukcja rekurencyjna ";
		return a;
	}
	else if (a > b) return euklides_r(a - b, b);
	else return euklides_r(a, b - a);
}

int euklides_p(int a, int b) {
	while (a != b) {
		int temp = a;
		a = (a > b) ? a - b : a;
		b = (b > temp) ? b - temp : b;
	}
	cout << "funckja iteracyjna ";
	return a;
}
#include<iostream>
using namespace std;

int dwumian_r(int n, int k) {
	if (n < k) return 0;
	if (k == 0 || k == n)
		return 1;
	return dwumian_r(n - 1, k) + dwumian_r(n - 1, k - 1);
}
int dwumian_p(int n, int k) {
	int value = 1;
	for (int i = 0; i < k; i++) {
		value = (value * (n - i)) / (i + 1);
	}
	return value;
}
void licz_czas(int funkcja(int a, int b), int a, int b) {
	auto start = high_resolution_clock::now();
	cout << "wynik " << funkcja(a, b) << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Czas na wywolanie funkcji: "
		<< duration.count() << " ms" << endl;
}
int main()
{
	int a;
	int b;
	cout << "Wpisz dwie liczby dla euklidesa ";
	cin >> a >> b;
	cout << "Euklides" << endl;
	licz_czas(euklides_r, a, b);
	licz_czas(euklides_p, a, b);
	// Funkcje rekurencyjne dla euklidesa zawsze zajmuja wiecej czasu, ale roznica jest rzedu killkuset milisekund
	cout << "Wpisz dwie liczby dla dwumianow ";
	cin >> a >> b;
	cout << "Dwumiany" << endl;
	cout << "funkcja rekurencyjna ";
	licz_czas(dwumian_r, a, b);
	cout << "funkcja iteracyjna ";
	licz_czas(dwumian_p, a, b);
	// Funkcje rekurencyjne dla dwumianow zajmuja bardzo duzo czasu dla duzych wartosci np 400 3, przy malych jest prawie tak samo np 20 2
}

