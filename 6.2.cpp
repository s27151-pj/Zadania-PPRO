#include <iostream>

using namespace std;

int main()
{
    int x[7]; y[7]; z[7]; k[7]; l[7]; n; b; c;
    char p[]={"informatyki", "matematyki", "chemii" ,"jez. polskiego"};

    for (int i = 1; i <= 6; i++){
        
        cout << "Podaj imię ucznia nr " << i << ": ";
        cin >> x[i];
        cout << "Podaj ocene z informatyki : ";
        cin >> y[i];
        cout << "Podaj ocene z matematyki : ";
        cin >> z[i];
        cout << "Podaj ocene z chemii : ";
        cin >> k[i];
        cout << "Podaj ocene z jezyka polskiego : ";
        cin >> l[i];
    } 

    cout << "Podaj liczbe zapytan : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        
        cout << "Podaj nr ucznia [1..6] : ";
        cin >> b;
        cout << "Podaj nr przedmiotu [0..3] : ";
        cin >> c;
        cout << "Uczen: " << x[b] << "ocena z " << p[c] << 
    }
    
    
    
    return 0;
}
