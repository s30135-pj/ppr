
#include <iostream>
#include <cmath>
using namespace std;
struct Punkt {
	double x;
	double y;
};
double oblicz_odleglosc(Punkt j, Punkt d) {
	return sqrt(pow((d.x - j.x), 2) + pow((d.y - j.y), 2));
}
int main()
{
	Punkt jeden = { 2, 3 };
	Punkt dwa = { 3, 4 };
	cout << oblicz_odleglosc(jeden, dwa);
}

