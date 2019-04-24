#include <iostream>
using namespace std;

void maior(int x, int y, int z){
    int maior;
    maior = x;
    if (y>maior) maior = y;
    if (z>maior) maior = z;

    cout << "\nSaida: " << maior;
}

int main(){
    int x, y, z;
    cout << "Entrada: ";
    cin >> x >> y >> z;
    maior(x, y, z);

    return 0;
}
