#include <iostream>
using namespace std;

int fib(int);

int main(){
    int n = 0;
    cout << "Podaj wartość: ";
    cin >> n;
    if ( n >= 0){
        int liczba = fib(n);
        cout << "Następny wyraz ciągu to " << liczba << endl;
    }
    else{
        cout << "Wartość nie może być ujemna" << endl;
    };
    
}

int fib(int n){
    int a0 = 0;
    int a1 = 1;
    int wynik = 0;
    
    do{
        wynik = a0 + a1;

        a0 = a1;
        a1 = wynik;
    }
    while( wynik <= n);

    return wynik;
}