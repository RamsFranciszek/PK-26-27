#include <iostream>
using namespace std;

int main(){

    int podstawa, wykladnik, wynik = 1;
    cout << "Podaj podstawę: ";
    cin >> podstawa;

    cout << "Podaj wykładnik: ";
    cin >> wykladnik;

    cout << "Podstawa: " << podstawa << endl;
    cout << "Wykładnik: " << wykladnik << endl;

    

    for(int i = 1; i <= wykladnik; i++){
        wynik = wynik*podstawa;
    }
    if(wykladnik < 0){
        cout << "Nie można przeprowadzić, bo ujemny wykładnik" << endl;
    }
    else{
    cout << podstawa << " ^ " << wykladnik << " = " << wynik << endl;
    };
    return 0;


}