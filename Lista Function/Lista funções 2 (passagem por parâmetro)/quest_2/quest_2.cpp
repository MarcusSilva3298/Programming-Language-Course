#include <iostream>
using namespace std;

void Tabuada(int x){
    for (int i=1; i<11; i++){
        cout << x << " * " << i << " = " << (x*i) << endl;
    }
}

int main(){
    int x;
    cout << "Entrada: ";
    cin >> x;
    cout << "\nSaída: " << endl;
    Tabuada(x);

    return 0;
}
