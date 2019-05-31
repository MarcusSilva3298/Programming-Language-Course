#include <iostream>
using namespace std;

int mult(int a, int b){
    if (b==0) return 0;
    else return (a + mult(a, b-1));
}

int main(){
    int a, b;
    cout << "a * b: " && cin >> a >> b;

    int m = mult(a, b);

    cout << "a * b = " << m;

    return 0;
}
