#include <iostream>
using namespace std;
#include <vector>

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
    
    int temporary;
    
    for (int i = 0; i < vec.size(); i++){
        for (int j = i + 1; j < vec.size(); j++){
            
            if (vec[j] < vec[i]){
                temporary = vec[i];
                vec[i] = vec[j];
                vec[j] = temporary;
            }
        }
    }
  
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << "\t";
    }
    return 0;
}
