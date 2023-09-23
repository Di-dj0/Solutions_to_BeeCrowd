#include <iostream>

using namespace std;

int main(){

    int a = 0, b = 0, c = 0;

    cin >> a >> b;

    if(a >= b){
        b = b + 24;
        c = b - a;
    }
    else{
        c = b - a;
    }
        

    cout << "O JOGO DUROU " << c << " HORA(S)" << endl;

    return 0;
}