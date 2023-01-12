#include <iostream>
using namespace std;

int main()
{
    string x;
    string b;
    int n;
    
    cout << "Podaj stringa do konkatenacji: ";
    cin >> x;
    cout << endl << "Podaj liczbe konkatenacji: ";
    cin >> n;
    
    for (int i = 1; i <= n+1; i++){
        
        b += x;
        
    }
    
    cout << "Odp: " << b; 
    
    
    return 0;
}
