#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec;
    int wv;
    int variuable;
    
    cout << "Podaj wielkość wektora" << endl;
    cin >> wv;
    
    while ( vec.size() != wv ) {
        
        cout << "Podaj zmienna" << endl;
        cin >> variuable;
        vec.push_back(variuable);
      
    }
    
    for (int i = 0; i < vec.size(); i++){
        
        cout << vec[i] << " ";
        
    }
    cout << endl;
    
    
    
    
    
    
    return 0;
}
