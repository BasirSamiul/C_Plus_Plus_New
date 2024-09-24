#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vec = {1,2,3};

    cout << vec[0] << endl;

    vector <int> vect(3,0);

    for(int i = 0; i < 3; i++){
        cout << vect[i] << endl;
    }
    for(int i : vec){
        cout << i << endl << "------------" << endl;
    }

    return 0;
}
