#include <iostream>
using namespace std;

int verf(int n1, int n2){
    int nn1, nn2, result;
    nn1= n1/100;
    nn2= n2/100;

    if (nn1==nn2) result = 1;
    else result = 0;

    return result;
}

int main(){
    int n1, n2, rest;
    cout << "Entrada: ";
    cin >> n1 >> n2;
    rest = verf(n1, n2);
    cout << "\nSaida: " << rest;

    return 0;
}
