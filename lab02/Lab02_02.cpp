#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    int precyzja = 0; 

    cout << "Wybierz precyzję: \n [1] pojedyncza precyzja \n [2] podwójna precyzja " << endl; 

    cout << "Wybór: ";
    cin >> precyzja;

    if(precyzja == 1){
        float a = 0.0f;
        float b = 0.0f;

        cout << "Podaj a: ";
        cin >> a;

        cout << "Podaj b: ";
        cin >> b;
        
        float suma = a + b;
        float roznica = a - b;
        float iloczyn = a * b;
        float iloraz = a / b;

        cout << fixed << setprecision(12);
        cout << "Suma: " << suma << endl;
        cout << "Różnica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Iloraz: " << iloraz << endl;


    }
    else if(precyzja == 2){
        double a = 0.0;
        double b = 0.0;

        cout << "Podaj a: ";
        cin >> a;

        cout << "Podaj b: ";
        cin >> b;
        
        double suma = a + b;
        double roznica = a - b;
        double iloczyn = a * b;
        double iloraz = a / b;

        cout << fixed << setprecision(12);
        cout << "Suma: " << suma << endl;
        cout << "Różnica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Iloraz: " << iloraz << endl;
    }
    else{
        cout << "Niepoprawny wybór" << endl;
    };
      



    return 0;

}