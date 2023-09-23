#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    
    string _animal, _input1, _input2, _input3;

    cin >> _input1;
    cin >> _input2;
    cin >> _input3;

    if(_input1 == "vertebrado"){

        if(_input2 == "ave"){

            if(_input3 == "carnivoro"){
                _animal = "aguia";
            }

            else{
                _animal = "pomba";
            }

        }

        else{

            if(_input3 == "onivoro"){
                _animal = "homem";
            }

            else{
                _animal = "vaca";
            }

        }

    }
    else{

        if(_input2 == "inseto"){

            if(_input3 == "hematofago"){
                _animal = "pulga";
            }

            else{
                _animal = "lagarta";
            }

        }

        else{

            if(_input3 == "hematofago"){
                _animal = "sanguessuga";
            }

            else{
                _animal = "minhoca";
            }

        }

    }

    cout << _animal << endl;

    return 0;
}