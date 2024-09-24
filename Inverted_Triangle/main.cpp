#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter your printing number to maintain sequence: " << endl;

    cin >> num;

    for (int i = 0; i < num; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0; j < num - i; j++){
            cout << (i + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
