#include <iostream>
using namespace std;

int main(){

    int rozmiar = 1;

    cout << "Podaje rozmiar szachownicy: ";
    cin >> rozmiar;


    for(int wiersz = 0; wiersz < rozmiar; wiersz++){

        for(int kolumna = 0; kolumna < rozmiar; kolumna++){
            
            if((wiersz + kolumna) % 2 == 0 ){
                 cout << "##" ;
            }
           else{
            cout << " ";
           }
        }
        cout << endl;
    };

    return 0;


}