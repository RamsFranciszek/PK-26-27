#include <iostream>
using namespace std;

int main(){

    int x = 0;

    cout << "Podaj liczbę: ";
    cin >> x;

    if ( x % 2 == 0){
        cout << "Parzyta: TAK" << endl;
    }
    else{
        cout << "Parzysta: NIE" << endl;
    };

    if ( x % 8 == 0){
        cout <<"Podzielna przez 8: TAK" << endl;
    }
    else{
        cout <<"Podzielna przez 8: NIE" << endl;
    };

    if (x % 16 == 0){
        cout << "Podzielna przez 16: TAK" << endl;
    }
    else{
        cout << "Podzielna przez 16: NIE" << endl;
    };

    cout << "Ósemkowo: " << oct << x << endl;
    cout << "Szesnastkowo: " << hex << x << endl;

    return 0;


}