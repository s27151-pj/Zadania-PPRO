#include <iostream>

using namespace std;


int main()
{
	int table[100];
	int x;
	cout << "Podaj dlugosc tablicy: ";
	cin >> x;
	cout << endl;
	for (int t = 0; t < x; t++) {

		cout << "Podaj liczbe znajdujaca sie na pozycji :" << t + 1 << endl;
		cin >> table[t];
		cout << endl;
	}
	cout << endl << "Twoja tablica to: ";
	for (int t = 0; t < x; t++) {

		cout << table[t];

	}
	cout << endl << endl;


	for (int t = 0; t < x; t++) {
		int a = 0;
		int s = 0;
		int d = 0;
		int f = 0;
		int g = 0;
		int h = 0;
		int j = 0;
		int k = 0;
		int l = 0;
		int z = 0;
		if (table[t] == 0) {
			a++;
		}
		if (table[t] == 1) {
			s++;
		}
		if (table[t] == 2) {
			d++;
		}
		if (table[t] == 3) {
			f++;
		}
		if (table[t] == 4) {
			g++;
		}
		if (table[t] == 5) {
			h++;
		}
		if (table[t] == 6) {
			j++;
		}
		if (table[t] == 7) {
			k++;
		}
		if (table[t] == 8) {
			l++;
		}
		if (table[t] == 9) {
			z++;
		}
		if (a <= s) {
			if (s <= d) {
				if (d <= f) {
					if (f <= g) {
						if (g <= h) {
							if (h <= j) {
								if (j <= k) {
									if (k <= l) {
										if (l <= z) {


										}
									}
								}
							}
						}
					}
				}
			}
		}

	}
	
}
