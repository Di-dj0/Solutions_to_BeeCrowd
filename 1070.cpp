#include <iostream>
#include <vector>

using namespace std;

int main(){

    int _input = 0;
    vector<int> _values;


    cin >> _input;

    do
    {
        if((_input%2) != 0)
            _values.push_back(_input);

        _input++;

    } while (_values.size() != 6);
    

    // The size of a vector will always be positive, so the lexical analyser gets an error if you compare a normal int to a unsigned int!
    for(unsigned int i = 0; i < _values.size(); i++)
        cout << _values[i] << endl;

    return 0;
}