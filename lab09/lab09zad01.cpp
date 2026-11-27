#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ... dopisz dziesiątki, nastki, jednosci
const char* dziesiatki(int liczba){
    static const char* dziesiatki[] = {" ", "dziesięć", "dwadieścia", "trzydzieści", "czterdzieści", "pięćdziesiąt",
                                    "sześćdziesiąt", "siedemdziesiąt", "osiemdziesiąt", "dziewięćdziesiąt"};
    
        return dziesiatki[(liczba/10)%10];
}

const char* nastki(int liczba){
    static const char* nastki[] = {" ", "jednenaście", "dwanaście", "trzynaście", "czternaście", "piętnaście",
                                    "szesnaście", "siedemnaście", "osiemnaście", "dziewiętnaście"};
    
        return nastki[ liczba % 100 - 10 ];
}

const char* jednostki(int liczba){
    static const char* jednostki[] = {" ", "jeden", "dwa", "trzy", "cztery", "pięC",
                                    "sześć", "siedem", "osiem", "dziewięć"};
    
        return jednostki[ liczba % 10 ];
}


// Funkcja zwraca nazwę setek
const char* setki(int liczba) {
    static const char* setki[] = { "", "sto", "dwieście", "trzysta", "czterysta", "pięćset",
                                   "sześćset", "siedemset", "osiemset", "dziewięćset" };
    return setki[liczba / 100]; // Indeks tablicy to wynik liczba / 100
}

int main() {
    int liczba, s, d, n, j;
    string wynik;

    cout << "Podaj liczbe: ";
    cin >> liczba;


    s = liczba / 100;                       // Setki 

    d = (liczba/10)%10

    n = liczba % 100 - 10; 

    j = liczba % 10;

    if (s > 0) {
        wynik += setki(liczba);             // Wywołanie funkcji setki
        wynik += " ";
    }
    if (d>0){
        wynik += dziesiatki(liczba);
        wynik += " ";
    }
    if(liczba % 100 < 20 && liczba % 100 > 10){
        wynik += n
    }
    cout << wynik << endl;
    return 0;
}