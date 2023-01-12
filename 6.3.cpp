#include <iostream>
using namespace std;

int main()
{
    int array[10] = { 11 ,313 ,151 ,13123 ,1 ,13 ,41 ,131 ,5 ,2 };
    int temporary;
    
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            
            if (array[j] < array[i]){
                temporary = array[i];
                array[i] = array[j];
                array[j] = temporary;
            }
        }
    }
  
    for (int i = 0; i < 10; i++){
        cout << array[i] << "\t";
    }
    return 0;
}
