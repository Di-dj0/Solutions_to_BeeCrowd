#include <iostream>

using namespace std;

int main(){

    int _evenCount = 0, _input = 0;

    for(int i = 0; i < 5; i++){

        cin >> _input;

        if((_input%2) == 0)
            _evenCount++;

    }

    cout << _evenCount << " valores pares" << endl;

    return 0;
}