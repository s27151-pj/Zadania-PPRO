#include <iostream>

using namespace std;

int main()
{
    cout<<"Twoja liczba: ";
    int n;
    cin >> n;

    int p = 0; //liczby podzielne przez 5 niepodzielne przez 3

    for (int i = 1; i <= n; i++){

        if ((i % 5) == 0 && (i % 3) != 0)
            p++;
    }
    cout << "(liczby podzielne przez 5 niepodzielne przez 3 nie wieksze niz twoja liczba) Odp: " << p;
    return 0;
}
