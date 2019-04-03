#include <iostream>
using namespace std;

int divisores(int x){
    int j=0;
    for (int i=1; i<=x; i++){
        if (x%i==0) j++;
    }

    return j;
}

int main(){
    int x, y;
    cout << "Entrada: ";
    cin >> x;
    y = divisores(x);
    cout << "\nSaida: " << y;

    return 0;
}
