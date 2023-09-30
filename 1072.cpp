#include <iostream>

using namespace std;

int main(){

    int _inside = 0, _outside = 0, _count = 0, _input = 0;

    cin >> _count;

    for(int i = 0; i < _count; i++){
        cin >> _input;
        
            if(_input >= 10 && _input <= 20)
                _inside++;

            else
                _outside++;
    }
    
    cout << _inside << " in" << endl;
    cout << _outside << " out" << endl;

    return 0;
}