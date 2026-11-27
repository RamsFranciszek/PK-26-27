#include <iostream>
using namespace std;

int fib(int);

int main(){
    int n = 0;
    cout << "Podaj wartość: ";
    cin >> n;
    
    cout << "f(" << n << ") = " << fib(n) << endl;
}

int fib(int n){ // zamiast while do robimy sobie rekurencje która dla dwóch przykładów bazowych zwraca wartość jaką chcemy mieć dla 0 i 1 wyrazu funkcji
    int wartosc0 = 0;
    int wartosc1 = 1;

    if (n == 0) {
        return wartosc0;
    }

    if (n == 1) {
        return wartosc1;
    }

    return fib(n - 1) + fib(n - 2); // tutaj sobie obliczamy wartość dla naszego n co się liczy bo funkcja wraca do siebie i oblicza nam sama wartości 
}