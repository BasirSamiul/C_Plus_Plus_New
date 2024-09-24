#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';

    int num;

    cout << "Enter your number how much sequence do you want print: " << endl;

    cin >> num;

    for(int i = 0; i < num; i++){
        for (int j = 0; j < i+1; j++){

            cout << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }

    return 0;
}
