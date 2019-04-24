#include <iostream>
using namespace std;



int main(){
    int n, m;
    cout << "Insira o numero de linhas e colunas da matriz: ";
    cin >> n >> m;

    int A[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << "Elementos a"<< i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    //a)
    cout << "\nElementos da diagonal principal: ";
    for (int i=0; i<n; i++){
        cout << A[i][i] << " ";
    }

    //b)
    int soma=0;
    for (int i=0; i<n; i++){
        for (int j=1; j<m; j++){
            if (j>i) soma+=A[i][j];
        }
    }
    cout << "\nSoma dos elementos acima da diagonal principal: " << soma <<endl;

    //c)
    long long int prd=1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (j<i) prd = prd*A[i][j];
        }
    }
    cout << "Produto dos elementos abaixo da diagonal principal: " << prd << endl;

    //d)
    int cont = m-1;
    cout << "\nMatriz sem diagonal secundaria: " << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (j != cont) cout << A[i][j] << "\t";
            else cont--;
        }
        cout << endl;
    }

    return 0;
}
