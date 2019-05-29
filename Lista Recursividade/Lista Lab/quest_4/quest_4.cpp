#include <iostream>
using namespace std;

int fibo (int n){
    if (n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout << "Insira o enesimo numero de fibonacci: ";
    cin >> n;

    cout << "N numero de fibonacci: " << fibo(n);
}
