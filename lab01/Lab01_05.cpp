#include <iostream>
using namespace std;

int main(){
    float R = 0;

    cout << "Podaj wartość długości promienia koła: ";
    cin >> R;

    float pole = 3.14*R*R;
    float obw = 3.14*R*2;

    cout << "Pole: " << pole << endl;
    cout << "Obwód: " << obw << endl;

    return 0;
}