#include<iostream>
using namespace std;

//#include <vector>

string Plansza[] = { "1","2","3","4","5","6","7","8","9"};
int w = 0;
int x;
string c;

void plansza()
{
    cout << "+---+---+---+" << endl;
    for (int i = 0; i < 9; i++){
        cout << "| " << Plansza[i] << " ";
        if ((i+1) % 3 == 0) cout<< "|" << endl << "+---+---+---+" << endl;
    }
}
void status()
{
    for (int i = 1; i < 3; i++){
        if (i%2 != 0) c = "X";
        if (i%2 == 0) c = "Y";
        if ( Plansza[0] == c && Plansza[1] == c && Plansza[2] == c
        || Plansza[3] == c && Plansza[4] == c && Plansza[5] == c
        || Plansza[6] == c && Plansza[7] == c && Plansza[8] == c
        || Plansza[0] == c && Plansza[3] == c && Plansza[6] == c
        || Plansza[1] == c && Plansza[4] == c && Plansza[7] == c
        || Plansza[2] == c && Plansza[5] == c && Plansza[8] == c
        || Plansza[0] == c && Plansza[4] == c && Plansza[8] == c
        || Plansza[2] == c && Plansza[4] == c && Plansza[6] == c
        ){
            //system("cls");
            if (c == "X") w = 1;
            if (c == "Y") w = 2;
        }
    }
}
int main()
{
    cout<<"T5. Gra w kolko i krzyzyk"<<endl<<endl;
    plansza();
    cout<<"Gracz 1 to X\nGracz 2 to Y\nZaczyna gracz 1\n";
    //system("clear");
    int b = 1;
    for (int i = 0; i < 9; i++){

        if (b%2 == 0){
            cout << "Prosze podac pole [1..9] dla Y: ";
            cin >> x;
            while (Plansza[x-1] == "X" || Plansza[x-1] == "Y"){
                cout << "Pole zostalo juz zajete\nProsze podac pole [1..9] dla Y: ";
                cin >> x;
            }
            if (Plansza[x-1] != "X" || Plansza[x-1] != "Y") Plansza[x-1] = "Y";
        }
        if (b%2 != 0){
            cout << "Prosze podac pole [1..9] dla X: ";
            cin >> x;
            while (Plansza[x-1] == "X" || Plansza[x-1] == "Y"){
                cout << "Pole zostalo juz zajete\nProsze podac pole [1..9] dla X: ";
                cin >> x;
            }
            if (Plansza[x-1] != "X" || Plansza[x-1] != "Y") Plansza[x-1] = "X";
        }
        cout << "\n";
        //system("clear");
        plansza();
        b++;
        status();
        if (w == 1){
            //plansza();
            cout << "wygral X";
            return 0;
        }
        if (w == 2){
            //plansza();
            cout << "wygral Y";
            return 0;
        }
    }
    cout << "Remis";
    return 0;
}
