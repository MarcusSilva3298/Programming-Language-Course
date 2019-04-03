#include <iostream>
using namespace std;

void readCount(int &soma_j1, int &soma_j2){
    char j11, j12, j13='0', j21, j22, j23='0';
    cout << "Cartas do Jogador 1: ";
    cin >> j11 >> j12 >> j13;
    cout << "\nCartas do jogador 2: ";
    cin >> j21 >> j22 >> j23;


    soma_j1 = j11+j12+j13;
    soma_j2 = j21+j22+j23;
}

void winner(int soma_j1, int soma_j2){
    if (soma_j1>soma_j2) cout << "\nO jogador 1 venceu";
    else if (soma_j1<soma_j2) cout << "\nO jogador 2 venceu";
    else cout << "\nEmpate";

}

int main(){
    int soma_j1, soma_j2;
    readCount(soma_j1, soma_j2);
    winner(soma_j1, soma_j2);

    return 0;
}
