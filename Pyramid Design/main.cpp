#include <iostream>

using namespace std;

int main()
{

    int n = 4;

    for (int i = 0; i < n; i++){
        //Printing Spaces : n - i - 1
        for(int j = 0; j < n - i -1; j++){
            cout << " " ;
        }
        //Printing numbers : i + 1
        for (int j = 1; j <= i + 1; j++){
            cout << j;
        }
        //Printing Second Patterns numbers:
        for (int j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
