#include <iostream>
#include <cstring>
#define tam 100
using namespace std;

struct aluno{
    float notas[3];
    int faltas;
    char matr[tam], nome[tam];
};

bool aprv(aluno alunos){
    float med = (alunos.notas[0]+alunos.notas[1]+alunos.notas[2])/3;
    if (med>=7) return true;
    else if (med<7 && med>=5){
        for (int i=0; i<3; i++){
            if (alunos.notas[i]<3) return false;
            else if (alunos.notas[3]>=3) return true;
        }
    }else return false;
}

int main(){
    aluno alunos;
    cout << "Nome do aluno: " && cin.getline(alunos.nome, tam);
    cout << "Matricula do aluno: " && cin.getline(alunos.matr, tam);
    cout << "Numero de faltas: " && cin >> alunos.faltas;
    cout << "Notas do aluno: ";
    for (int i=0; i<3; i++) cin >> alunos.notas[i];

    bool rst = aprv(alunos);

    if (rst==true) cout << "Aluno " << alunos.nome << " foi aprovado";
    else cout << "Aluno " << alunos.nome << " foi reprovado";

    return 0;
}
