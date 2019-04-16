#include <iostream>
using namespace std;

void pot(int x, int y){
    int aux=x;
    for (int i=1; i<y; i++){
        x=x*aux;
    }

    cout << "Saida: " << x;
}

int main(){
    int x, y;
    cout << "Entrada. Valor de X e Y: ";
    cin >> x >> y;
    pot(x, y);

    return 0;
}
