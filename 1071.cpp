#include <iostream>

using namespace std;

int main(){

    int _initialValue = 0, _endValue = 0, _oddSum = 0;

    cin >> _initialValue;
    cin >> _endValue;

    if(_endValue < _initialValue){
        swap(_initialValue, _endValue);
    }

    for(int i = ++_initialValue; i < _endValue; i++)
        if((i%2) != 0)
            _oddSum += i;

    cout << _oddSum << endl;

    return 0;
}