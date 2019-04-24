#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Insira o numero de linhas e colunas da matriz: ";
    cin >> n >> m;

    int A[n][m], soma[n];
    for (int i=0; i<n; i++){
        soma[i]=0;
        for (int j=0; j<m; j++){
            cout << "Elementos a"<< i+1 << j+1 << ": ";
            cin >> A[i][j];
            soma[i]+=A[i][j];
        }
    }

    cout << endl << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << A[i][j]*soma[i] << "\t";
        }
        cout << endl;
    }

    return 0;
}
