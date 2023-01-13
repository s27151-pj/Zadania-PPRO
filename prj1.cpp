#include<iostream>
using namespace std;

//#include <vector>

string Plansza[] = { "1","2","3","4","5","6","7","8","9"};
int w = 0;
int x;
string c;

void plansza() // Wyswietla plansze
{
    cout << "+---+---+---+" << endl;
    for (int i = 0; i < 9; i++){
        cout << "| " << Plansza[i] << " ";
        if ((i+1) % 3 == 0) cout<< "|" << endl << "+---+---+---+" << endl;
    }
}
void status() // Na bierzaco sprawdza status rozgrywki
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
    //system("clear"); // Na compilatorze https://www.onlinegdb.com/online_c++_compiler
    // pozwalala mi ta komenda na czyszczenie ekranu co każdy ruch przez co terminal był bardziej przejzysty
    // natomiast w CLion niedziala tak samo wiec musialem z tego zrezygnowac
    int b = 1;
    for (int i = 0; i < 9; i++){

        if (b%2 == 0){ // ruch gracza Y
            cout << "Prosze podac pole [1..9] dla Y: ";
            cin >> x;
            while (Plansza[x-1] == "X" || Plansza[x-1] == "Y"){ // petla sprawdzajaca czy gracz uzupelnia prawidlowe pole
                cout << "Pole zostalo juz zajete\nProsze podac pole [1..9] dla Y: ";
                cin >> x;
            }
            if (Plansza[x-1] != "X" || Plansza[x-1] != "Y") Plansza[x-1] = "Y"; // podpisanie wartosci w tablicy
        }
        if (b%2 != 0){ // ruch gracza X
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
        plansza(); // pobiera nowa plansze
        b++;
        status(); // sprawdza warunki zakonczenia gry
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
    cout << "Remis"; // gdy gra sie nieroztrzygnie zakonczy sie remisem
    return 0;
}
