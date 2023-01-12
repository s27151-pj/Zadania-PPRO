#include <iostream>
using namespace std;
//#include <vector>

string Plansza[] = {"1","2","3","4","5","6","7","8","9"};

void plansza()
{
    cout << "+---+---+---+" << endl;
    for (int i = 0; i < 9; i++){
        
        cout << "| " << Plansza[i] << " ";
        
        
        if ((i+1) % 3 == 0) cout<< "|" << endl << "+---+---+---+" << endl;;
            
        
    }
}




int main()
{
    plansza();
    
    return 0;
}
