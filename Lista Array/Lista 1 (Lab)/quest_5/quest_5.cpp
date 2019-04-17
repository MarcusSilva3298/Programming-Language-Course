#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de alunos: ";
    cin >> n;
    float A[n], soma=0;
    for (int i=0; i<n; i++){
        cout << "Altura do aluno " << i+1 << ": ";
        cin >> A[i];
        soma+=A[i];
    }
    float med = soma/n;
    int na=0, nb=0;
    cout << "Media: " << med << endl;
    float C[n], B[n];
    for (int i=0; i<n; i++){
        if (A[i]>med){
            C[na] = A[i];
            na++;
        }
        else if (A[i]<med){
            B[nb] = A[i];
            nb++;
        }
    }

    cout << "Alunos acima da media: ";
    for (int i=0; i<na; i++){
        cout << C[i] << ", ";
    }
    cout << "\nAlunos abaixo da media: ";
    for (int i=0; i<nb; i++){
        cout << B[i] << ", ";
    }

    return 0;
}
