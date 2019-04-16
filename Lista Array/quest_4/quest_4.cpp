#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de elementos nas matrizes: ";
    cin >> n;
    int A[n];
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << " de A: ";
        cin >> A[i];
    }

    for (int i=0; i<n; i++){
       for (int j=0; j<n-1; j++){
            if (A[j]<A[j+1]){
                int aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
       }
    }

    cout << "Elementos ordenados da Matriz A: ";
    for (int i=0; i<n; i++){
        cout << A[i] << ", ";
    }

    return 0;
}
