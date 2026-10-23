#include <iostream>
using namespace std;


int main(){

    int konwencja = 0;
    double temp = 0.0;

    cout << "Wybierz konwencję: \n [1] Przeliczanie z Celsjusza na Farenheita \n [2] Przeliczanie z Farenheita na Celsjusza" << endl;
    cout << "Wybór: ";
    cin >> konwencja;

    if ( konwencja == 1){
        cout << "Podaj temperaturę: ";
        cin >> temp;

        if ( temp < -273.15){
            cout << "Zbyt zmino na liczenie :(" << endl;
        }
        else{
            double nowa_temp = temp *1.8 + 32;

            cout << temp << " stopni Celsjusza to " << nowa_temp << " stopni Farenheita" << endl;
        };

    }

    else if ( konwencja == 2){
        cout << "Podaj temperaturę: ";
        cin >> temp;

        if ( temp < -459.67){
            cout << "Zbyt zmino na liczenie :(" << endl;
        }
        else{
            double nowa_temp = (temp - 32) * 5/9;

            cout << temp << " stopni Farenheita to " << nowa_temp << " stopni Celsjusza" << endl;
        };

    }

    else{
        cout << "Podano zła konwencję. Naucz się czytać nigga" << endl;
    };

    return 0;


}