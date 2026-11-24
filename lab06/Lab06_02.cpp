#include <iostream>
#include <cmath>
using namespace std;

void jednosci(int);
void dziesiatki(int);
void setki(int);


int main(){
    int x = 0;

    cout << "Podaj liczbę z zakresu 0 do 999: ";
    cin>>x;

    if ( x == 0){
        cout << "zero" << endl;
        return 0;
    }
    else if( x < 0 ){
        cout << "minus";
        x = abs(x);
    }
    else if( x < 10 ){
        jednosci(x);
    }
    else if( x < 100){
        dziesiatki(x);
    }
    else if( x < 1000 ){
        setki(x);
    }    
    else{
        cout << "Podano złą liczbę" << endl;
    }

    cout << endl;
    return 0;
}

void jednosci(int n){
    switch (n){
        case 1:
        cout << "jeden";
        break;
        case 2:
        cout << "dwa";
        break;
        case 3:
        cout << "trzy";
        break;
        case 4:
        cout << "cztery";
        break;
        case 5:
        cout << "pięć";
        break;
        case 6:
        cout << "sześć";
        break;
        case 7:
        cout << "siedem";
        break;
        case 8:
        cout << "osiem";
        break;
        case 9:
        cout << "dziewieć";
    }
}

void dziesiatki(int n){
    int d = (n/10) % 10;
    int j = n % 10;

    if ( d==1 ){
        if(j >= 0){
        switch(j){
            case 0:
            cout << "dziesieć";
            break;
            case 1:
            cout << "jednenaście";
            break;
            case 2:
            cout << "dwanaście";
            break;
            case 3:
            cout << "trzynaście";
            break;
            case 4:
            cout << "czternaście";
            break;
            case 5:
            cout << "piętnaście";
            break;
            case 6:
            cout << "szesnaście";
            break;
            case 7:
            cout << "siedemnaście";
            break;
            case 8:
            cout << "osiemnaście";
            break;
            case 9:
            cout << "dziewiętnaście";
        }
    }
}
    else{
        switch(d){
            case 2:
            cout << "dwadzieścia";
            break;
            case 3:
            cout << "trzydzieści";
            break;
            case 4:
            cout << "czterdzieści";
            break;
            case 5:
            cout << "pięćdziesiąt";
            break;
            case 6:
            cout << "sześćdziesiąt";
            break;
            case 7:
            cout << "siedemdziesiąt";
            break;
            case 8:
            cout << "osiemdziesiąt";
            break;
            case 9:
            cout << "dziewiećdziesiąt";
        }
        if ( d >=2 && j > 0){
            cout << " ";
            jednosci(j);
        }
    }
}


void setki( int n ){
    int s = n/100;
    int reszta = n % 100;
    switch(s){
            case 2:
            cout << "dwieście";
            break;
            case 3:
            cout << "trzysta";
            break;
            case 4:
            cout << "czterysta";
            break;
            case 5:
            cout << "pięćset";
            break;
            case 6:
            cout << "sześćset";
            break;
            case 7:
            cout << "siedemset";
            break;
            case 8:
            cout << "osiemset";
            break;
            case 9:
            cout << "dziewiećset";
        }
        if (reszta > 0){
            cout << " ";
            if (reszta < 10){
                jednosci(reszta);
            }
            else{
                dziesiatki(reszta);
            }
        }
    }        