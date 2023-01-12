#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector <int> vec;
    vector <string> imie;
    vector <string> nazwisko;
    int wv;
    int variuable;
    string variuable2;
    
    cout << "Podaj wielkość wektora (liczba studentów): ";
    cin >> wv;
    int x = 1;
    while ( vec.size() != wv ) {
        
        cout << endl << "Dane dla: " << x << " Studenta; Podaj numer indeksu: ";
        cin >> variuable;
        vec.push_back(variuable);
        
        cout << endl <<"Dane dla: " << x << " Studenta; Podaj imie studenta: ";
        cin >> variuable2;
        imie.push_back(variuable2);
        
        cout << endl <<"Dane dla: " << x << " Studenta; Podaj nazwisko studenta: ";
        cin >> variuable2;
        nazwisko.push_back(variuable2);
        
        x++;
    }
    
    int temporary;
    string temporary2;
    
    for (int i = 0; i < vec.size(); i++){
        for (int j = i + 1; j < vec.size(); j++){
            
            if (vec[j] < vec[i]){
                temporary = vec[i];
                vec[i] = vec[j];
                vec[j] = temporary;
                
                temporary2 = imie[i];
                imie[i] = imie[j];
                imie[j] = temporary2;
                
                temporary2 = nazwisko[i];
                nazwisko[i] = nazwisko[j];
                nazwisko[j] = temporary2;
                
            }
        }
    }
  
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " " << imie[i] << " " << nazwisko[i] << "\t";
    }
    return 0;
}
