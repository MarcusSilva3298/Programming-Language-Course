#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de elementos nos vetores: ";
    cin >> n;
    float u[n], v[n];
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << " de u: ";
        cin >> u[i];
    }
    for (int i=0; i<n; i++){
        cout << "Elemento " << i+1 << " de v: ";
        cin >> v[i];
    }

    float p=0, y[n];
    for (int i=0; i<n; i++){
        y[i] = u[i] * v[i];
        p+=y[i];
    }
    cout << "Produto interno: " << p << endl;
    cout << "y = [";
    for (int i=0; i<n; i++){
        if (i==n-1) cout << y[i] << "]";
        else cout << y[i] << ", ";
    }

    return 0;
}
