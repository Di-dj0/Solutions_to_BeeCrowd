#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double _salarioAtual = 0.0, _salarioNovo = 0.0, _reajuste = 0.0;
    int _percentual = 0;

    cin >> _salarioAtual;

    if(_salarioAtual > 0 && _salarioAtual <= 400.00){
        _percentual = 15;
    }

    if(_salarioAtual > 400.00 && _salarioAtual <= 800.00){
        _percentual = 12;
    }

    if(_salarioAtual > 800.00 && _salarioAtual <= 1200.00){
        _percentual = 10;
    }

    if(_salarioAtual > 1200.00 && _salarioAtual <= 2000.00){
        _percentual = 7;
    }

    if(_salarioAtual > 2000.00){
        _percentual = 4;
    }

    _reajuste = _percentual * (_salarioAtual/100);

    _salarioNovo = _salarioAtual + _reajuste;

    cout << fixed << setprecision(2);

    cout << "Novo salario: " << _salarioNovo << endl;
    cout << "Reajuste ganho: " << _reajuste << endl;
    cout << "Em percentual: " << _percentual << " %" << endl;

    return 0;
}