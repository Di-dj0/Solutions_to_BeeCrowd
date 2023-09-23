#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    vector<double> _input = {0};
    double aux = 0.0;

    for(int i = 0; i < 3; i++){
        
        cin >> aux;
        _input.push_back(aux);

    }

    sort(_input.begin(), _input.end());
    reverse(_input.begin(), _input.end());

    if(_input[0] >= (_input[1] + _input[2]))
        cout << "NAO FORMA TRIANGULO" << endl;

    else{

        if(pow(_input[0], 2) == (pow(_input[1], 2) + pow(_input[2], 2)))
            cout << "TRIANGULO RETANGULO" << endl;

        if(pow(_input[0], 2) > (pow(_input[1], 2) + pow(_input[2], 2)))
            cout << "TRIANGULO OBTUSANGULO" << endl;

        if(pow(_input[0], 2) < (pow(_input[1], 2) + pow(_input[2], 2)))
            cout << "TRIANGULO ACUTANGULO" << endl;

        if(_input[0] == _input[1] && _input[0] == _input[2] && _input[1] == _input[2])
            cout << "TRIANGULO EQUILATERO" << endl;

        else if(_input[0] == _input[1] || _input[0] == _input[2] || _input[1] == _input[2])
            cout << "TRIANGULO ISOSCELES" << endl;

    }

    return 0;
}