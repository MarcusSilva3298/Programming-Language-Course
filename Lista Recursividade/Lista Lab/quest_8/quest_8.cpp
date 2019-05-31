#include <iostream>
using namespace std;

int an(int i){
    if (i==0) return 1;
    else if (i==1) return 2;
    else return ((2 * an(i-2)) -  an(i-1));
}


int main(){
    int n, m;
    cout << "Insira n: " && cin >> n;

    for (int i=0; i<=n; i++){
        int a = an(i);
        cout << "a" << "(" << i << "): " << a << endl;
    }

    return 0;
}
