#include <iostream>

using namespace std;

int silnia(int N){ // fajna sprawa bo funcja wykonuje siebie w samej sobie
    
    if ( N == 1 ){
        return 1;
    }

    return N * silnia(N-1);
}

int main(){
    int N = 0;

    cout << "N:  ";
    cin >> N;

    if ( N < 0 ){
        cout << "N musi być nieujemne" << endl;
    }
    else{
        cout << "Silnia =  " << silnia(N) << endl;
    }
}