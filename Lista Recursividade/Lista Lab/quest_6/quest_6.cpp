#include <iostream>
using namespace std;

int prod(int n){
    if (n==1) return 2;
    return 2 * n * prod(n-1);
}

int main(){
    int n;
    cout << "Insira n para sequencia: ";
    cin >> n;

    cout << "Produtorio: " << prod(n);
}
