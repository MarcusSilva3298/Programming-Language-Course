#include <iostream>
using namespace std;

float soma(float n){
    if (n==1) return 1;
    return ((2*n)/(n+1)) + soma (n-1);
}

int main(){
    float n;
    cout << "Insira n para sequencia: ";
    cin >> n;

    cout << "Somatorio: " << soma(n);
}
