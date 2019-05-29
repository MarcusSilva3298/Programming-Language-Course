#include <iostream>
using namespace std;

int soma(int n){
    if (n==1) return 1;
    return n + soma(n-1);
}

int main(){
    int n;
    cout << "Insira um numero para o somatorio: ";
    cin >> n;

    int som = soma(n);

    cout << "Somatorio: " << som;

    return 0;
}
