#include <iostream>

using namespace std;

int main()
{

int a[10][10];

    for(int i=0; i<10; i++){
        
        for (int j = 1; j < 11; j++) {
            if (j <= 2) 
            {
                a[i][j] = (i) * (j);
                cout << " " << a[i][j] << " ";
            }
            if (j == 3) 
            {
                a[i][j] = (i) * (i);
                cout << " " << a[i][j] << " ";
            }
            if (j == 4) 
            {
                a[i][j] = ((i) + (j))-1;
                cout << " " << a[i][j] << " ";
            }
            if (j == 5) 
            {
                a[i][j] = ((i)-(j))+1;
                cout << " " << a[i][j] << " ";
            }
            if (j >= 6) 
            {
                a[i][j] = { 0 };
                cout << " " << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
