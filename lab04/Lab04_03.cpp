#include <iostream>
using namespace std;

int main(){

    int predkosc;

    cout << "Podaj liczbę przekroczonej prędkości: ";
    cin >> predkosc;

    if ( predkosc < 0){
        cout << "Prędkość przekroczona nie może być ujemna" << endl;
    }
    else if( predkosc <= 10 ){
        cout << "Mandat wynosi 50 PLN" << endl;
    } 
    else if( predkosc <= 20 ){
        cout << "Mandat wynosi 100 PLN" << endl;
    } 
    else if ( predkosc > 30 ){
        cout << "Mandat wynosi  200 PLN" << endl;
    }
    else {
        switch(predkosc){
            case 21: 
                cout << "Mandat wyonsi 110 PLN" << endl;
                break;
            case 22: 
                cout << "Mandat wyonsi 120 PLN" << endl;
                break;
            case 23: 
            case 27: 
            case 29:
                cout << "Mandat wynosi 140 PLN" << endl;
                break;
            case 24:
            case 25:
            case 28: 
                cout << "Mandat wyonsi 150 PLN" << endl;
                break;
            case 26:
                cout << "Mandat wyonsi 145 PLN" << endl;
                break;    
        }




    };


}