#include <iostream>
using namespace std;

int main(){
    char znak = '0';

    cout << "Podaj znak: ";
    cin>>znak;
    cout << "Znak: " << znak << endl;

    int x = static_cast<int>(znak);
    
    cout << "Kod: " << x;
    cout << " (" << showbase << hex << x << ")" << endl;

    return 0;
}