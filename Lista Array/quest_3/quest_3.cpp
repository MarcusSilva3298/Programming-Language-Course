#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de elementos nas matrizes: ";
    cin >> n;
    int A[n], B[n];
    for (int i=1; i<=n; i++){
        do{
            cout << "Elemento " << i << " de A: ";
            cin >> A[i];
        }while(A[i]%2!=0);
    }
    for (int i=1; i<=n; i++){
        do{
            cout << "Elemento " << i << " de B: ";
            cin >> B[i];
        }while(B[i]%2==0);
    }
    int n1 = n*2, C[n1];
    for (int i=1; i<=n1; i++){
        if (i<=n) C[i] = A[i];
        else C[i] = B[i-n];
    }
    cout << "Elementos da Matriz C: ";
    for (int i=1; i<=n1; i++){
        cout << C[i] << ", ";
    }

    return 0;
}
