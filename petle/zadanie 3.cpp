// petle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
