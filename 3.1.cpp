#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    float x = 0;
    float y = 0;


    cout << "program oblicza sumę, roznice, iloczyn i iloraz" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << endl;
    cout << "y = ";
    cin >> y;
    cout << endl;

    float a = x + y;
    float b = x - y;
    float c = x * y;
    float d = x / y;

    cout << "Suma = " <<  setprecision(2) << (double)a << endl;

    cout << "Roznica = " <<  setprecision(2) << (double)b << endl;

    cout << "Iloczyn = " <<  setprecision(2) << (double)c << endl;

    cout << "Iloraz = " <<  setprecision(2) << (double)d << endl;



}
