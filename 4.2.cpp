#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Podaj rozmiar tablicy: ";
    cin>>x;

    int arr[x];

    for(int i=0; i<x; i++)
    {
        cout<<"Podaj element "<<i+1<<" tablicy: ";
        cin>>arr[i];
    }

    cout << endl << "Twoja tablica to: ";
    for (int z = 0; z < x; z++) {

        cout << arr[z] << " ";

    }
    cout << endl;

    int odp = 0;
    int maxcount = 0;

    for (int i = 0; i < x; i++) {
        int count = 0;

        for (int j = 0; j < x; j++) {

            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount) {

            maxcount = count;
            odp = arr[i];

        }
    }
    cout << "najczesciej wystepujacy element w twojej tablicy liczb calkowitych to: " << odp;

}
