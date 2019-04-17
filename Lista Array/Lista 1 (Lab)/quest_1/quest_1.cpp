#include <iostream>
using namespace std;

int main(){
    int tam;
    cout << "Insira o numero de elementos que deseja colocar na matriz: ";
    cin >> tam;
    float A[tam], B[tam];
    for (int i=0; i<tam; i++){
        cout << "Numero " << i+1 << ": ";
        cin >> A[i];
        B[tam-i-1] = A[i];
    }
    cout << "Elementos de A: ";
    for (int i=0; i<tam; i++){
        cout << A[i] << ", ";
    }
    cout << "\nElementos de B: ";
    for (int i=0; i<tam; i++){
        cout << B[i] << ", ";
    }

    return 0;
}
