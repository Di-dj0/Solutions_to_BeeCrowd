#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){

    vector<int> _hours = {0}, _minutes = {0}, _response = {0};
    int _horarioInicialMinutos = 0, _horarioFinalMinutos = 0, _duracaoJogo = 0, _duracaoHoras = 0, _duracaoMinutos = 0;

    cin >> _hours[0] >> _minutes[0] >> _hours[1] >> _minutes[1];
    
    _horarioInicialMinutos = (_hours[0] * 60) + _minutes[0];
    _horarioFinalMinutos = (_hours[1] * 60) + _minutes[1];

    _duracaoJogo = (_horarioFinalMinutos - _horarioInicialMinutos);

    if(_horarioFinalMinutos <= _horarioInicialMinutos)
        _duracaoJogo += (24 * 60);

    _duracaoHoras = _duracaoJogo/60;
    _duracaoMinutos = _duracaoJogo%60;

    _response[0] = _duracaoHoras; _response[1] = _duracaoMinutos;

    cout << "O JOGO DUROU " << _response[0] << " HORA(S) E " << _response[1] << " MINUTO(S)" << endl;

    return 0;
}