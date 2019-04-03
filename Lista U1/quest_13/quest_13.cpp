#include <iostream>
using namespace std;

void fatorial(int x){
    int fat=1;
    for (int i=2; i<=x; i++){
        fat=fat*i;
    }
    cout << "\nFatorial: " << fat;
}

int main(){
    int x;
    cout << "Entrada: ";
    cin >> x;
    fatorial(x);

    return 0;
}
