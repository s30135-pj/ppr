

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
    int x, y;
    cout << "Podaj poczatek zakresu ";
    cin >> x;
    cout << "Podaj koniec zakresu ";
    cin >> y;
    int poczatek = (x > y) ? y : x;
	int koniec = (x > y) ? x : y;
    cout << "Liczby pierwsze od " << poczatek << " do " << koniec << endl;
    for (int i = poczatek; i <= koniec; i++) {
        if (isPrime(i)) cout << i << ' ';
    }
}
