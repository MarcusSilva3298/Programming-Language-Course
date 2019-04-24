#include <iostream>
using namespace std;

void div(int x, int y, int &q, int &r){
    q=x/y;
    r=x%y;
}


int main(){
    int x, y, q, r;
    cout << "X e Y: ";
    cin >> x >> y;
    div(x, y, q, r);
    cout << "\nQuociente: " << q << "\nResto: " << r;

    return 0;
}
