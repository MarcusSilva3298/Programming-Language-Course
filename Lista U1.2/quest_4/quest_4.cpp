#include <iostream>
using namespace std;

void mult(int x, int &x2, int &x3){
    x2= x*2;
    x3= x*3;
}

int main(){
    int x, x2, x3;
    cout << "Insira X: ";
    cin >> x;
    mult(x, x2 ,x3);
    cout << "\nDobro de X: " << x2 << "\nTriplo de X: " << x3;

    return 0;
}
