#include <iostream>
using namespace std;

float serie(int x){
    float rst=0, fat;
    for (int i=1; i<=x; i++){
        fat = 1;
        if (i>1){
            for (int j=2; j<=x; j++){
                fat=fat*j;
            }
        }
        cout << fat << endl;
        rst = rst+(1/fat);
    }

    return rst;
}

int main(){
    int x;
    float rst;
    cout << "Insira o valor de X: ";
    cin >> x;
    rst = serie(x);
    cout << "Resultado: " << rst << endl;

    return 0;
}
