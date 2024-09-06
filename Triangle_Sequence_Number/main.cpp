#include <iostream>

using namespace std;

int main()
{
    int s_num;

    char ch = 'A';

    cout << "Enter your number that how much sequence continue: " << endl;

    cin >> s_num;

    for (int i = 0; i < s_num; i++){
        for (int j = i+1; j > 0; j--){
            cout << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }

    return 0;
}
