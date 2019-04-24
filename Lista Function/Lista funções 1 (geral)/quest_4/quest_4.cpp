#include <iostream>
using namespace std;

bool par(int x){
    bool rst;
    if (x%2==0) rst = true;
    else rst = false;

    return rst;
}

int main(){
    int x, n;
    bool rst;
    cout << " Insira quantos numeros deseja testar: ";
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << "\n Numero " << i << endl;
        cout << " Valor de X: ";
        cin >> x;
        rst=par(x);
        if(rst==true) cout << " " << x << " e par" << endl;
        else cout << " " << x << " nao e par" << endl;
    }

    return 0;
}
