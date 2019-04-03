#include <iostream>
using namespace std;

void abc(int x, int y){
    int x1, y1;

    x1=x%100;
    y1=y/1000;

    cout << x1 << endl;
    cout << y1 << endl;

    cout << "\nSaida: ";
    if (x1==y1) cout << 1;
    else cout << 0;
}

int main(){
    int x, y;
    cout << "Entrada: ";
    cin >> x >> y;
    abc(x, y);

    return 0;
}
