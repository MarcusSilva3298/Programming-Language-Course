//  QUESTÃO 10

#include <iostream>
using namespace std;

void divisores(int x){
    cout << x << endl;
    cout << "\nSaida : ";
    for (int i=1; i<=x; i++){
        if (x%i==0) cout << i << " ";
    }
}

int main(){
    int x;
    cout << "Entrada: ";
    cin >> x;
    divisores(x);

    return 0;
}
