#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double _salario = 0.0, _salarioAuxiliar = 0.0, _imposto = 0.0;
    int _percentual = 0;

    cin >> _salario;

    if(_salario > 4500.00){
        _percentual = 28;
        _salarioAuxiliar = _salario - 4500;
        _salario -= _salarioAuxiliar;
        _imposto += _percentual * (_salarioAuxiliar/100);
    }

    if(_salario > 3000.01 && _salario <= 4500.00){
        _percentual = 18;
        _salarioAuxiliar = _salario - 3000;
        _salario -= _salarioAuxiliar;
        _imposto += _percentual * (_salarioAuxiliar/100);
    }

    if(_salario > 2000.01 && _salario <= 3000.00){
        _percentual = 8;
        _salarioAuxiliar = _salario - 2000;
        _salario -= _salarioAuxiliar;
        _imposto += _percentual * (_salarioAuxiliar/100);
    }

    if(_salario > 0 && _salario <= 2000.00){
        _percentual = 0;
        _salarioAuxiliar = 0;
        _imposto += 0;
    }
    

    cout << fixed << setprecision(2);

    if(_imposto != 0)
        cout << "R$ " << _imposto << endl;
    else
        cout << "Isento" << endl;

    return 0;
}