#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
using namespace std;


void pole(int a) {
	cout << "Pole kwadratu to " << a * a << endl;
}
void pole(int a, int b) {
	cout << "Pole prostokata to " << a * b << endl;
}

void pole(int a, int b, int c) {
	double p = (a + b + c) / 2;
	double w = sqrt(p * ((p - a) * (p - b) * (p - c)));
	cout << "Pole trojkata to " << w << endl;
}
void pole(int r, double pi) {
	cout << "Pole kola to " << pi * r * r << endl;
}
int main()
{
	cout << "Wpisz dlugosci bokow, lub promien kola po spacjach: ";
	string s;
	getline(cin, s);
	istringstream iss(s);
	vector<int> dane;
	int licz;
	while (iss >> licz) {
		dane.push_back(licz);
	}
	if (dane.size() == 1) {
		cout << "Czy to kolo? t / n " << endl;
		string odp;
		cin >> odp;
		if (odp == "t") {
			pole(dane[0], M_PI);
		}
		else if (odp == "n") {
			pole(dane[0]);
		}
	}
	else if (dane.size() == 2) {
		pole(dane[0], dane[1]);
	}
	else if (dane.size() == 3) {
		pole(dane[0], dane[1], dane[2]);
	}
}

