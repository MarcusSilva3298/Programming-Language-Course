#include <iostream>
using namespace std;

void troca(int &x, int &y, int &z, int &k){
    int aux;

    cin >> x >> y >> z >> k;
    cout << "x: " << x << " y: " << y << " z: " << z << " k: " << k << endl;

    aux=k;
    k=z;
    z=y;
    y=x;
    x=aux;
}

int main(){
    int x, y, z, k;

    troca(x, y, z, k);
    cout << "x: " << x << " y: " << y << " z: " << z << " k: " << k;
}
