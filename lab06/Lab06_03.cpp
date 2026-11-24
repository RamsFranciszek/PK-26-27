#include <iostream>

using namespace std;

float dodaj(float, float);
float odejmij(float, float);
float pomnoz(float, float);
float podziel(float, float);


int main(){
    float a = 0.0;
    float b = 0.0;
    char znak = 'k';

    cout << "Działanie: ";
    cin >> a >> znak >> b;

    if(znak == '*' || znak == '+' || znak == '-' || znak == '/'){
        cout << "Wynik: ";
            switch(znak){
            case '+':
                cout << dodaj(a,b);
                break;
            case '-':
                cout << odejmij(a,b);
                break;
            case '*':
                cout << pomnoz(a,b);
                break;
            case '/':
                cout << podziel(a,b);
                break;
        }
        cout << endl;
    }   
    else{
        cout << "Nieprawawidłowo podane działanie " << endl;
    };
    


}

float dodaj(float a, float b){
    
    return a + b;
}

float odejmij(float a, float b){
    
    return a - b;
}

float pomnoz(float a, float b){

    return a * b;
}

float podziel(float a, float b){

    return a / b;
}