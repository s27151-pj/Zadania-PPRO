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
    cout << "Twoja tablica: ";
	for (int t = 0; t < x; t++) {

		cout << table[t];

	}
	cout << endl << endl;

	int a = 0;
	int b = 0;
	for (int t = 0; t < x; t++) {

		a = table[t];
			if (a >= b) {
				b = a;
			}			
	}
	cout << "największy element tej tablicy to : " << b;
}
