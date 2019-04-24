#include <iostream>
using namespace std;


const int dim = 100;

void LerMatriz(int A[dim][dim], int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << "Elementos a"<< i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }
}

void MaiorValor(int A[dim][dim], int n, int m){
    int maior=A[0][0];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (A[i][j]>maior) maior = A[i][j];
        }
    }

    cout << "O maior elemento da matriz eh: " << maior;
}

int main(){
    int n, m;
    int A[dim][dim];

    cout << "Insira o numero de linhas e colunas da matriz: ";
    cin >> n >> m;

    LerMatriz(A, n, m);
    MaiorValor(A, n, m);

    /*
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    */
}
