#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int a[num];

    for (int i = 0; i < num; i++){
        cin >> a [i];
    }
    int small = a[0];

    int index = 0;

    for(int i = 1; i < num; i++){
        if(a[i] < small){
            small = a [i];
            index = i;
        }
    }
    cout << index + 1 << endl;

    return 0;
}
