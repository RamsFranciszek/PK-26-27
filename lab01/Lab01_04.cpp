#include <iostream>
using namespace std;

int main(){
    int A = 0;
    int B = 0;
    int C = 0;

    cout << "Podaj długość odcinka A: ";
    cin >> A;
    cout << "Podaj długość odcinka B: ";
    cin >> B;
    cout << "Podaj długość odcinka C: ";
    cin >> C;
    int Pole = 2*A*B + 2*A*C + 2*B*C;

    int Obj = A*B*C;

    cout << "Pole: " << Pole << endl;
    cout << "Objętość: " << Obj << endl;

    return 0;
}