#include <iostream>
#include <cstring>
#define tam 100
using namespace std;

struct aln{
    float notas[3];
    int faltas;
    long int mtr;
    char nome[tam];
};

bool aprv(aln alunos[], int i){
    float med = (alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2])/3;
    if (med>=7) return true;
    else if (med<7 && med>=5){
        for (int i=0; i<3; i++){
            if (alunos[i].notas[i]<3) return false;
            else if (alunos[i].notas[3]>=3) return true;
        }
    }else return false;
}

int rpv(aln alunos[], int n, int maxfaltas, aln rpv_faltas[], aln rpv_n_faltas[]){
    int j=0, k=0;
    for (int i=0; i<n; i++){
        bool rpv = aprv(alunos, i);
        if (rpv==false){
            cout << alunos[i].nome << " Reprovado";
            if (alunos[i].faltas > maxfaltas){
                rpv_faltas[j].mtr = alunos[i].mtr;
                for (int cont=0; cont<tam; cont++) rpv_faltas[j].nome[cont] = alunos[i].nome[cont];
            }
        }else cout << alunos[i].nome << " Aprovado";
    }
}

int main(){
    int n, maxfaltas;
    cout << "Quantos alunos deseja inserir: " && cin >> n;
    cout << "Numero maximo de faltas: " && cin >> maxfaltas;
    aln alunos[n];
    for (int i=0; i<n; i++){
        cout << endl << "---------------- Aluno " << i+1 << " ----------------" << endl << endl;
        cin.ignore();
        cout << "Nome do aluno: " && cin.getline(alunos[i].nome, tam);
        cout << "Matricula do aluno: " && cin >> alunos[i].mtr;
        cout << "Numero de faltas: " && cin >> alunos[i].faltas;
        cout << "Notas do aluno: ";
        for (int i=0; i<3; i++) cin >> alunos[i].notas[i];
        if (i==(n-1)) cout << endl << "------------------------------------------" << endl << endl;
    }

    aln rpv_faltas[n];
    aln rpv_n_faltas[n];
    rpv(alunos, n, maxfaltas, rpv_faltas, rpv_n_faltas);


    return 0;
}
