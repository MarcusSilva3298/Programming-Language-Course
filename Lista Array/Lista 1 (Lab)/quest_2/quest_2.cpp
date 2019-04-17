#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de elementos nos vetores: ";
    cin >> n;
    float A[n], B[n], C[n];
    for (int i=1; i<=n; i++){
        cout << "Elemento " << i+1 << " de A: ";
        cin >> A[i];
    }
    for (int i=1; i<=n; i++){
        cout << "Elemento " << i+1 << " de B: ";
        cin >> B[i];
    }
    for (int i=1; i<=n; i++){
        cout << "Elemento " << i+1 << " de C: ";
        cin >> C[i];
    }

    int n1= n*3;
    float D[n1];
    for (int i=1; i<=n1; i++){
        if (i<=n) D[i] = A[i];
        else if (i<=2*n) D[i] = B[i-n];
        else D[i] = C[i-(2*n)];
    }
    cout << "Elementos de D: ";
    for (int i=1; i<=n1; i++){
        cout << D[i] << ", ";
    }

    return 0;
}
