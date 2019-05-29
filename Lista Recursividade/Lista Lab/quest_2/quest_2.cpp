#include <iostream>
using namespace std;

int fatorial(int n){
    if (n==1 || n==0) return 1;
    return n * fatorial(n-1);
}

int main(){
    int n;
    cout << "Insira um numero para o fatorial: ";
    cin >> n;

    int fat = fatorial(n);

    cout << "Fatorial: " << fat;

    return 0;
}
