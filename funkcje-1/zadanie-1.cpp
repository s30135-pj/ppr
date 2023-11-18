
#include <iostream>
using namespace std;


int czy_szescian(int licz) {
	for (int i = 1; i * i * i <= licz; i++) {
		if (i * i * i == licz) return 1;
 }
	return 0;
}
int main()
{
	cout << czy_szescian(7) << endl;
	cout << czy_szescian(8) << endl;
	cout << czy_szescian(64) << endl;
	cout << czy_szescian(125) << endl;
	cout << czy_szescian(1231) << endl;
	cout << czy_szescian(9 * 9 * 9) << endl;
	cout << czy_szescian(9 * 8 * 1);
}

