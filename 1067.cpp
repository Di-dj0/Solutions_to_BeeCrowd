#include <iostream>

using namespace std;

int main(){

    int _input = 0;

    cin >> _input;

    for(int i = 1; i <= _input; i++)
        if((i%2) != 0)
            cout << i << endl;

    return 0;
}