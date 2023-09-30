#include <iostream>

using namespace std;

int main(){

    int _numbers = 0;

    cin >> _numbers;

    for(int i = 1; i <= _numbers; i++)
        if( (i%2) == 0)
            cout << i << "^2 = " << i*i << endl;

    return 0;
}