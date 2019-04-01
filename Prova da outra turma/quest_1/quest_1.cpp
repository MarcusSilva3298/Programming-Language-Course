#include <iostream>
#include <cmath>
using namespace std;

void pot(int x, int b){
    int pot, m;
    for (int i=2; i<x; i++){
        pot = pow(b,i);
        if (x%pot==0) m=i;
    }
    cout << "Saida 1 - Maior potencia de " << b << " divisora de " << x << ": " << m << endl;
}

void primo(int x){
    cout << "Saida 2 - Decomposicao em fatores primos: " << "\n---" << endl;
    while(x!=1){
        for (int i=2; i<=x; i++){
            if(x%i==0){
                cout << i <<endl;
                x=x/i;
                break;
            }
        }
    }
}

int main(){
    int x, b;
    cout << "Entrada - Insira o valor de X e B: ";
    cin >> x >> b;
    pot(x, b);
    primo(x);
}
