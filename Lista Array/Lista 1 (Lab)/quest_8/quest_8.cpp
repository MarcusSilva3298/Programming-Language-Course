#include <iostream>
using namespace std;

void alert_med(int n, float v[], float med){
    int cont=0;
    for (int i=0; i<n; i++){
        if (v[i]>med) cont++;
    }
    cout << "Numero de elementos maiores que a media: " << cont;
}

int main(){
    int n;
    cout << "Numero de elementos: ";
    cin >> n;
    float v[n], soma=0;
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
        soma += v[i];
    }
    float med = soma/n;
    alert_med(n, v, med);

    return 0;
}
