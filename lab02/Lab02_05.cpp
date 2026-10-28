#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float wynik = 0.00;
    cout << "Podaj swój wynik: ";
    cin >> wynik;

    cout << fixed << setprecision(1);
    cout << "Punkty: " << wynik << endl;
    if (0.0f < wynik && wynik < 4.5f){

        cout << "Uzyskana ocena to niedostateczny (2.0)" << endl;
    }
    else if (4.4f < wynik && wynik < 5.3f){

        cout << "Uzyskana ocena to dostateczny (3.0)" << endl; 
    }
    else if ( 5.2f < wynik && wynik < 6.3f){

        cout << "Uzyskana ocena to ponad dostateczny (3.5)" << endl; 
    }
    else if (6.2f < wynik && wynik < 7.3f){

        cout << "Uzyskana ocena to dobry (4.0)" << endl; 
    }
    else if (7.2f < wynik && wynik < 8.3f){

        cout << "Uzyskana ocena to ponad dobry (4.5)" << endl; 
    }
    else if (8.2f < wynik && wynik < 9.1f){

        cout << "Uzyskana ocena to bardzo dobry (5.0)" << endl; 
    }
    else{
        cout << "Podano niepoprawny wynik" << endl;
    };

    return 0;

}