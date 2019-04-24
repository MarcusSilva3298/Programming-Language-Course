#include <iostream>
using namespace std;

bool multiple(int x, int y){
    bool rst;
    if (y%x==0) rst = true;
    else rst = false;

    return rst;
}

int main(){
    int x, y, np;
    bool rst;
    cout << " Insira quantos pares de numeros deseja testar: ";
    cin >> np;
    for (int i=1; i<=np; i++){
        cout << "\n Par " << i << endl;
        cout << " Valores de X e Y: ";
        cin >> x >> y;
        rst=multiple(x,y);
        if(rst==true) cout << " " << y << " e multiplo de " << x << endl;
        else cout << " " << y << " nao e multiplo de " << x << endl;
    }

    return 0;
}
