
#include <iostream>

using namespace std;


int main()
{
    int x;
    int y;
    int tbl[] = {0};
    cout << "Podaj dlugosc tablicy:";
    cin >> x;
    cout << endl;

    for (int i = 0; i < x; i++) {
        cout << "Podaj liczbe znajdujaca sie na pozycji :" << i + 1 << endl;
        cin >> tbl[i];
    }


  
    for (int i = 0; i < x; i++) {
        cout << tbl[i];
    }
    return 0;
}
