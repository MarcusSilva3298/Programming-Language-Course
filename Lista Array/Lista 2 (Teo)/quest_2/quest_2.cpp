#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Insira o numero de elementos dos vetores A e B, respectivamente: ";
    cin >> m >> n;
    float A[m], B[n];

    cout << "Insira os elementos de A: ";
    for (int i=1; i<=m; i++){
        cin >> A[i];
    }
    cout << "Insira os elementos de B: ";
    for (int i=1; i<=n; i++){
        cin >> B[i];
    }

    int r = m+n, aux=0;
    float C[r];

    if (m==n){
        for (int i=1; i<=r; i++){
            if (i%2!=0){
                C[i] = A[i-aux];
                aux = i - aux;
            }else{
                C[i] = B[i-aux];
                aux = i - aux;
            }
        }
    }else if (m>n){
        for (int i=1; i<=r; i++){
            if((n-aux+1)!=0){
                if (i%2!=0){
                    C[i] = A[i-aux];
                    aux = i - aux;
                }else{
                    C[i] = B[i-aux];
                    aux = i - aux;
                }
            }else{
                C[i] = A[i-aux];
            }
        }
    }else{
        for (int i=1; i<=r; i++){
            if((m-aux+1)!=0){
                if (i%2!=0){
                    C[i] = A[i-aux];
                    aux = i - aux;
                }else{
                    C[i] = B[i-aux];
                    aux = i - aux;
                }
            }else{
                C[i] = B[i-aux];
            }
        }
    }


    cout << "Elementos de C: ";
    for (int i=1; i<=r; i++){
        cout << C[i] << ", ";
    }

    return 0;
}
