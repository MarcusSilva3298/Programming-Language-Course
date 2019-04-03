#include <iostream>
using namespace std;

int pot(int x){
    int i=0, pot=2;
    while (pot<x){
        pot=pot*2;
        i++;
    }
    return i;
}

int main(){
    int x, rslt;
    cout << "Entrada: ";
    cin >> x;
    rslt = pot(x);
    cout << "\nSaida: 2^" << rslt;

    return 0;
}
