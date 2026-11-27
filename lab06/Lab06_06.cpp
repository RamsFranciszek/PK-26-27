#include <iostream>

using namespace std;

void konwersja(int N, int podstawa){

    if ( N == 0){
        return;
    }
    
    konwersja(N/podstawa, podstawa);

    int reszta = N % podstawa;

    cout << reszta;
}

int main(){
    int N = 0;

    cout << "N:  ";
    cin >> N;
    if ( N < 0){
        cout << "Nie działa dla liczb ujemnych bruh" << endl;
    }
    else{
        cout << "Binarnie: ";
        if( N == 0){
            cout << 0;
        }
        else{
            konwersja(N,2);
        }
        cout << endl;
        cout << "Piątkowo: ";
        konwersja(N,5);
        cout << endl;

        cout << "Siódemkowo: ";
        konwersja(N,7);
        cout << endl;

        cout << "Ósemkowo: ";
        konwersja(N,8);
        cout << endl;

        cout << "Szesnastkowo: ";
        konwersja(N,16);
        cout << endl;
    }    
    return 0;



}