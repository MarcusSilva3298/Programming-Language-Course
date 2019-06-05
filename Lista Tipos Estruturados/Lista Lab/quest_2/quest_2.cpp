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

int sch(aln alunos[], int n){
    long int aux;
    cout << "Insira a matrícula do aluno que deseja buscar: " && cin >> aux;
    for (int i=0; i<n; i++){
        if (aux == alunos[i].mtr) return i;
        else if (i==n-1) return -1;
    }
}

int main(){
    int n;
    cout << "Quantos alunos deseja inserir: " && cin >> n;
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

    int rst = sch(alunos, n);

    if (rst!=-1){
        cout << endl << "---------------- Dados do aluno ----------------" << endl;
        cout << "Nome do aluno: " << alunos[rst].nome << endl;
        cout << "Matricula do aluno: " << alunos[rst].mtr << endl;
        cout << "Faltas do aluno: " << alunos[rst].faltas << endl;
        cout << "Notas do aluno: ";
        for (int i=0; i<3; i++) cout << alunos[i].notas[i] << "; ";
    }else cout << "Aluno não encontrado";

    return 0;
}
