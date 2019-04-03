#include <iostream>
using namespace std;

void dentro(float r, float c1, float c2, float p1, float p2){
    cout << "\nSaida: O ponto (" << p1 << "," << p2 << ") ";
    if (p1>(r+c1) || p2>(r+c2)) cout << " nao esta dentro do circulo";
    else cout << "esta dentro do circulo";
}

int main(){
    int r, c1 ,c2, p1, p2;
    cout << "Entrada: ";
    cin >> r >> c1 >> c2 >> p1 >> p2;
    dentro(r, c1, c2, p1, p2);

    return 0;
}
