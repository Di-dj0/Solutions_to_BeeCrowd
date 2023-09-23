#include <iostream>

using namespace std;

int main(){

    int _positiveCount = 0;
    double _input = 0;

    for(int i = 0; i < 6; i++){

        cin >> _input;

        if(_input >= 0)
            _positiveCount++;

    }

    cout << _positiveCount << " valores positivos" << endl;

    return 0;
}