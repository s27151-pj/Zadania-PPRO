#include <iostream>

using namespace std;

int main()
{
    int x[7];
    int y[7];
    int z[7];
    int k[7];
    int l[7];
    
    
    
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
   
    
    
    
    return 0;
}
