#include <iostream>
using namespace std;

int main()
{   
    int x;
    cout<<"Podaj rozmiar tablicy liczb całkowitych: ";
    cin>>x;
 
    int arr[x];
 
    for(int i=0; i<x; i++)
    {
        cout<<"Podaj element "<<i+1<<" tablicy liczb całkowitych: ";
        cin>>arr[i];
    }
    
    cout << endl << "Twoja tablica to: ";
	for (int z = 0; z < x; z++) {

		cout << arr[z];
	}
	cout << endl << "Tablica wejsciowa:" << endl;
	
	int a = 0;
	
	for(int i = 0; i < x; i++){
	    
	    if ( (i % 2) == 0 )
	
	        cout << arr[i] << "    ";

	    if ( (i % 2) != 0 )

	        cout << arr[i] << "    ";
        a++;
        if ((a % 2) == 0)
	        cout << endl;
	}
	
	cout << endl << "Tablica wejsciowa:" << endl;
	
	int b = 0;
	
	for(int i = 0; i < x; i++){
	    
	    if ( (i % 2) != 0 )
	
	        cout << arr[i-1] << "    ";

	    if ( (i % 2) == 0 )

	        cout << arr[i+1] << "    ";
        b++;
        if ((b % 2) == 0)
	        cout << endl;
	}
	    

    return 0;
}
