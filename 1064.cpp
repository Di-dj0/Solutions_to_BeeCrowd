#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double calculateAverage(vector<double> items, double size){

    double sum = 0.0;

    for(int i = 0; i < size; i++)
        if(items[i] >= 0)
            sum += items[i];

    return (sum/(size-1));
}

int main(){

    int _positiveCount = 0;
    double _input = 0.0, _average = 0.0;
    vector<double> _positiveNumbers = {0};

    for(int i = 0; i < 6; i++){

        cin >> _input;

        if(_input >= 0){
            _positiveCount++;
            _positiveNumbers.push_back(_input);
        }

    }

    _average = calculateAverage(_positiveNumbers, (double)_positiveNumbers.size());

    cout << fixed << setprecision(1); 

    cout << _positiveCount << " valores positivos" << endl;
    cout << _average << endl;

    return 0;
}