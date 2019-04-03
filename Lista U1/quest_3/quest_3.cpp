#include <iostream>
using namespace std;

int contador(int x){
    int cont=0;
    float divisor;
    divisor=x/10;
    cont++;
    while (divisor>1){
        divisor=divisor/10;
        cont++;
    }

    return cont;
}

int main(){
    int x, resultado;
    cout << "Entrada: ";
    cin >> x;
    resultado = contador(x);
    cout << "\nSaida: " << resultado;
    return 0;
}
