#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;
    int wv;
    int variuable;
    
    cout << "Podaj wielkość wektora: ";
    cin >> wv;
    
    while ( vec.size() != wv ) {
        
        cout << "Podaj zmienna: ";
        cin >> variuable;
        vec.push_back(variuable);
    }
    
    cout << "Twoj wektor: ";
    for (int i = 0; i < vec.size(); i++){
        
        cout << vec[i] << " ";
        
    }
    cout << endl;
    
    int a = 0;
	int b = 0;
	int c = 0;
	
	for (int t = 0; t < vec.size(); t++) {

		a = vec[t];
		if (a >= b) {
		    c = t;
			b = a;
		}
	}
	cout << "Wartość elementu maksymalnego wektora: " << b << endl;
	cout << "Numer indeksu elementu maksymalnego: " << c+1;
    
    
    
    return 0;
}
