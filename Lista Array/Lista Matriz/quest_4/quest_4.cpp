#include <iostream>
using namespace std;
const int dim=100;

bool MatrizEsp(int A[dim][dim], int n, int m){
    int cont = 0;
    float esp = (7*m*n)/10;
    bool rst;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (A[i][j]==0) cont++;
        }
    }


    if (cont>=esp) rst == true;
    else rst == false;
    return rst;
}

int main(){
    int m, n, A[dim][dim];
    bool rst;
    cout << "Insira o numero de linhas e colunas da matriz: ";
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << "Elementos a"<< i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }

    rst = MatrizEsp(A, n, m);

    if (rst == true) cout << "A matriz eh esparsa";
    else cout << "A matriz nao eh esparsa";

    return 0;
}
