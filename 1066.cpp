#include <iostream>

using namespace std;

int main(){

    int _value = 0, _evenCount = 0, _oddCount = 0, _positives = 0, _negatives = 0;

    for(int i = 0; i < 5; i++){

        cin >> _value;

        if(_value > 0)
            _positives++;

        else if(_value == 0);

        else
            _negatives++;

        if((_value%2) == 0)
            _evenCount++;

        else
            _oddCount++;
    }

    cout << _evenCount << " valor(es) par(es)" << endl;
    cout << _oddCount << " valor(es) impar(es)" << endl;
    cout << _positives << " valor(es) positivo(s)" << endl;
    cout << _negatives << " valor(es) negativo(s)" << endl;

    return 0;
}