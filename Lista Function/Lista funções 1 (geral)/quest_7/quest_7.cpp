#include <iostream>
using namespace std;

int maxdivcom(int x, int y){
    int mdc, menor=x;
    if (menor>y) menor = y;
    for (int i=1; i<=menor; i++){
        if(x%i==0 && y%i==0) mdc = i;
    }

    return mdc;
}


int main(){
    int x, y, mdc;
    cout << "Insira os valores de X e Y: ";
    cin >> x >> y;
    mdc = maxdivcom(x, y);
    cout << "Maximo divisor comum de " << x  << " e " << y << ": " << mdc << endl;

    return 0;
}
