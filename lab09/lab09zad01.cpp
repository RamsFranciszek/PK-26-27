#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ... dopisz dziesiątki, nastki, jednosci
const char* dziesiatki(int liczba){
    static const char* dziesiatki[] = {"dwadieścia", "trzydzieści", "czterdzieści", "pięćdziesiąt",
                                    "sześćdziesiąt", "siedemdziesiąt", "osiemdziesiąt", "dziewięćdziesiąt"};
    return dziesiatki[((liczba/10)-2)%10];
}

// Funkcja zwraca nazwę setek
const char* setki(int liczba) {
    static const char* setki[] = { "", "sto", "dwieście", "trzysta", "czterysta", "pięćset",
                                   "sześćset", "siedemset", "osiemset", "dziewięćset" };
    return setki[liczba / 100]; // Indeks tablicy to wynik liczba / 100
}

int main() {
    int liczba, s, d;
    string wynik;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Debug: liczba / 100 = " << liczba / 100 << endl;

    s = liczba / 100;                       // Setki 

    cout << "Debug: ((liczba/10)-2)%10"
    if (s > 0) {
        wynik += setki(liczba);             // Wywołanie funkcji setki
        wynik += " ";
    }

    cout << wynik << endl;
    return 0;
}