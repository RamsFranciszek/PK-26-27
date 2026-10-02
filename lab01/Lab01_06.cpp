#include <iostream>

using namespace std;

int main(){
    float P = 0.0; // kwota kredytu
    int T = 0; // okres kredytowania
    float R = 0.0; //stopa procentowa

    cout << "Podaj kwote kredytu: ";
    cin >> P;
    cout << "Podaj okres kredytowania: ";
    cin >> T;
    cout << "Podaj stopa procentowa: ";
    cin >> R;

    cout << fixed << setprecision(2);

    float I = (P * T * R )/100;

    int M = static_cast<int>(I);

    cout << "Wynik rzeczywisty:" << I << endl;
    cout << "Wynik całkowity: " << M << endl;

}