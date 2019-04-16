#include <iostream>
using namespace std;

void quadrado(int l){
    cout << endl;
    for (int i=1; i<=l; i++){
        for (int i=1; i<=l; i++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int l;
    cout << "Insira o numero de lados do quadrado: ";
    cin >> l;
    quadrado(l);

    return 0;
}
