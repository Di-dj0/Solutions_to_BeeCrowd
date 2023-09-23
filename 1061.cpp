#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Obs: Using #ifndef Region_name #endif to sepparate blocks of code

class Date
{

#ifndef Private_Fields
private:
    int days;
    int hours;
    int minutes;
    int seconds;
#endif

#ifndef Public_Fields
public:

    Date(){};

    Date(int a, int b, int c, int d){
        setDate(a, b, c, d);
    };

    int getTotalSeconds(){
        return (days*24*60*60)+(hours*60*60)+(minutes*60)+(seconds);
    }

    int getDays(){
        return days;
    }

    int getHours(){
        return hours;
    }

    int getMinutes(){
        return minutes;
    }

    int getSeconds(){
        return seconds;
    }

    void setDate(int a, int b, int c, int d){
        days = a;
        hours = b;
        minutes = c;
        seconds = d;
    }

    void setDateBySeconds(int _inputSeconds){

        //Calculates the days, then removes the days in seconds from the input
        int aux = (_inputSeconds/60/60/24);
        days = aux;
        _inputSeconds -= (aux*60*60*24);

        //Now calculating hours and updating _inputSeconds
        aux = (_inputSeconds/60/60);
        hours = aux;
        _inputSeconds -= (aux*60*60);

        //Now calculating minutes and updating _inputSeconds
        aux = (_inputSeconds/60);
        minutes = aux;
        _inputSeconds -= (aux*60);

        //Finally, take the rest of the _inputSeconds and alocate it as Seconds
        seconds = _inputSeconds;
    }

#endif
};


int main(){

    //Declaring variables
    string _auxiliarString = "a";
    vector<int> _initialDateValues = {0}, _endDateValues = {0};
    Date _initialDate, _endDate, _totalTime;
    int _initialDayInSeconds = 0;

    //Get the inputs, with _auxiliarString being an auxiliar used to skip the strings in the inputs
    cin >> _auxiliarString >> _initialDateValues[0];
    cin >> _initialDateValues[1] >> _auxiliarString >> _initialDateValues[2] >> _auxiliarString >> _initialDateValues[3];
    cin >> _auxiliarString >> _endDateValues[0];
    cin >> _endDateValues[1] >> _auxiliarString >> _endDateValues[2] >> _auxiliarString >> _endDateValues[3];

    //Update the values into date objects
    _initialDate.setDate(_initialDateValues[0], _initialDateValues[1], _initialDateValues[2], _initialDateValues[3]);
    _endDate.setDate(_endDateValues[0], _endDateValues[1], _endDateValues[2], _endDateValues[3]);

    //Let the _totalTime indicate _endDate for now
    _totalTime.setDateBySeconds(_endDate.getTotalSeconds());

    //Calculates the initial date day in seconds
    _initialDayInSeconds = (_initialDate.getDays()*24*60*60);

    //Decrements the initial day in seconds in both dates
    _initialDate.setDateBySeconds(_initialDate.getTotalSeconds() - _initialDayInSeconds);
    _endDate.setDateBySeconds(_endDate.getTotalSeconds() - _initialDayInSeconds);

    //Update _totalTime to calculate the difference between End Date and Beginning Date
    _totalTime.setDateBySeconds(_endDate.getTotalSeconds() - _initialDate.getTotalSeconds());

    //Display the results
    cout << _totalTime.getDays() << " dia(s)" << endl;
    cout << _totalTime.getHours() << " hora(s)" << endl;
    cout << _totalTime.getMinutes() << " minuto(s)" << endl;
    cout << _totalTime.getSeconds() << " segundo(s)" << endl;

    return 0;
}
