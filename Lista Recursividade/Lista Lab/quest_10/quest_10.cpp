#include <iostream>
using namespace std;

int pot(int a, int b){
    if (b==0) return 1;
    else return (a * pot(a, b-1));
}

int main(){
    int a, b;
    cout << "a ^ b: " && cin >> a >> b;

    int p = pot(a, b);

    cout << "a ^ b = " << p;

    return 0;
}
