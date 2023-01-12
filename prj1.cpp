#include <iostream>

using namespace std;

//#include <vector>

string Plansza[] = { "1","2","3","4","5","6","7","8","9"};
int w = 0;
int x;

void plansza()
{
    cout << "+---+---+---+" << endl;
    for (int i = 0; i < 9; i++){
        
        cout << "| " << Plansza[i] << " ";
        
        
        if ((i+1) % 3 == 0) cout<< "|" << endl << "+---+---+---+" << endl;;
            
        
    }
}
void status()
{
    if ( Plansza[1] == "X" && Plansza[2] == "X" && Plansza[3] == "X" ){
        system("clear");
        w = 1;
    }
        
}




int main()
{
    cout<<"T5. Gra w kołko i krzyzyk"<<endl<<endl;
    
    plansza();
    
    cout<<"Gracz 1 to X\nGracz 2 to Y\nZaczyna gracz 1\n";


    //system("clear");
    int b = 0;
    for (int i = 0; i < 9; i++){
        
        if (b%2 == 0)
        cout << "Prosze podac pole [1..9] dla X: ";
        cin >> x;
        Plansza[x-1] = "X";
        
        if (b%2 != 0)
        cout << "Prosze podac pole [1..9] dla Y: ";
        cin >> x;
        Plansza[x-1] = "Y";
        
        b++;
        system("clear");
        plansza();
        status();
        if (w == 1){
            cout << "wygral X";
            return 0;
        }
            
    }
        
    
    return 0;
}
