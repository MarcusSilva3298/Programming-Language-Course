#include <iostream>
using namespace std;

float b(float n){
    if (n==2) return 2;
    if (n==1) return 1;
    return b(n-1)+(2*b(n-2));
}

int main(){
    float n;
    cout << "Insira n para sequencia: ";
    cin >> n;

    cout << "Somatorio: " << b(n);
}
