#include <iostream>
using namespace std;

int main(){

    int wysokosc = 1;

    cout << "Wysokość: ";
    cin >> wysokosc;

    for(int wiersz = 0; wiersz < wysokosc; wiersz++){
        
        for (int spacja = 1; spacja <= wysokosc - wiersz - 1; spacja++) {
            cout << " ";
        }
        // Pętla wewnętrzna wypisująca odpowiednią liczbę gwiazdek (2 * i + 1)
        for (int gwiazdka = 1; gwiazdka <= (2 * wiersz + 1); gwiazdka++) {
            cout << "*";
        }
        cout << endl; // Przejście do nowej linii po każdym wierszu
    }

    return 0;

    



}