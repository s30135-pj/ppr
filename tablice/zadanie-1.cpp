
#include <iostream>
using namespace std;

int tab[10]{ 99, 22, 33, 11, 88, 333, 2, 15, 0, -100 };
//jedna opcja
void sortowanie_szybkie(int lewy, int prawy) {
	int p = tab[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do {
		while (tab[i] < p) i++;
		while (tab[j] > p) j--;
		if (i <= j) {
			x = tab[i];
			tab[i] = tab[j];
			tab[j] = x;
			i++; j--;
		}
	} while (i <= j);
	if (j > lewy) sortowanie_szybkie(lewy, j);
	if (i < prawy) sortowanie_szybkie(i, prawy);
}

//druga opcja
  // Divides array into two partitions
  int partition(int lo, int hi){
  // Pivot value
		int pivot = tab[((hi - lo) / 2) + lo]; // The value in the middle of the array

			// Left index
			int i = lo - 1;

  // Right index
		int j = hi + 1;

		while (true) {
			// Move the left index to the right at least once and while the element at
			// the left index is less than the pivot
			do { i = i + 1; } while (tab[i] < pivot);

				// Move the right index to the left at least once and while the element at
				// the right index is greater than the pivot
			do { j = j - 1; } while (tab[j] > pivot);

					// If the indices crossed, return
			if (i >= j) return j;

						// Swap the elements at the left and right indices
			int chwilowa = tab[i];
			tab[i] = tab[j];
			tab[j] = chwilowa;
		}
}
void quicksort(int lo, int hi) {
	if (lo >= 0 && hi >= 0 && lo < hi) {
		int p = partition(lo, hi);
		quicksort(lo, p); // Note: the pivot is now included
		quicksort(p + 1, hi);
	}
}

int main()
{
	//sortowanie_szybkie(0, 9);
	quicksort(0, 9);
	for (int i = 0; i < 10; i++) {
		cout << tab[i] << ' ';
	}
}