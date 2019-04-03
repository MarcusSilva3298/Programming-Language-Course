#include <iostream>
using namespace std;

void relogio(int x){
    int h, m, s;

    h= x/3600;
    m= (x-3600*h)/60;
    s= x%60;
    cout << h << endl;
    cout << m << endl;
    cout << s << endl;

    cout << h << " horas(s) " << m << ", minutos(s) e " << s << " segundo(s)";
}

int main(){
    int x;
    cout << "Entrada: ";
    cin >> x;

    relogio(x);

    return 0;
}
