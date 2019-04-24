#include <iostream>
using namespace std;

void primo(int x){
    int div=1;
    for (int i=2; i<x; i++){
        if (x%i==0){
            div++;
            break;
        }
    }
    if (div==1) cout << "\nEh primo";
    else cout << "\nNao eh primo";
}

int main(){
    int x;
    cout << "Entrada: ";
    cin >> x;
    primo(x);

    return 0;
}
