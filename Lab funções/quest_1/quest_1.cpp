#include <iostream>
using namespace std;

float somat(int a, int b, float rt){
    for (float i=a; i<=b; i++){
        rt = rt + (2/i);
    }

    return rt;
}

int main(){
    int a, b;
    float rt=0;
    cout << "Entrada. Valor de A e B: ";
    cin >> a >> b;
    rt= somat(a, b, rt);
    cout << "Saida. Resultado: " << rt;

    return 0;
}
