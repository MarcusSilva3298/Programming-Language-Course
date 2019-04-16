#include <iostream>
#include <math.h>
using namespace std;

float e(int x, int n){
    float rst=1, fat, pot;
    for (int i=1; i<=n; i++){
        fat = 1;
        if (i>1){
            for (int j=2; j<=i; j++){
                fat=fat*j;
            }
        }
        pot = pow(x,i);
        rst = rst+(pot/fat);
    }

    return rst;
}

int main(){
    int x, n;
    float rst;
    cout << "Insira o valor de X e N: ";
    cin >> x >> n;
    rst = e(x, n);
    cout << "Resultado: " << rst << endl;

    return 0;
}
