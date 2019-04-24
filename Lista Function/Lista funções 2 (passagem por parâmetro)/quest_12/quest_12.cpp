#include <iostream>
using namespace std;

void calcNota(float n1, float n2, float n3, float menor){
    float nn;

    if (menor==n1) nn = 15-n2-n3;
    else if (menor==n2) nn = 15-n1-n3;
    else nn = 15-n1-n2;

    cout << "\nSaida: " << nn;
}

float menorNota(float &n1, float &n2, float &n3){
    float menor;
    menor = n1;

    if (menor>n2) menor = n2;
    if (menor>n3) menor = n3;

    cout << "\nMenor nota: " << menor << endl;

    return menor;
}

int main(){
    float n1, n2, n3, menor;
    cout << "Entrada: ";
    cin >> n1 >> n2 >> n3;
    menor = menorNota(n1, n2, n3);
    calcNota(n1, n2, n3, menor);

    return 0;
}
