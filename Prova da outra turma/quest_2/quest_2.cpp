#include <iostream>
using namespace std;

void cont(int x, int &p, int &ip){
    int n1, n2, i=10;
    while (x/i>0){
        if (i==10) n1=(x%i);
        else n1=n2;
        n2=((x%(i*10))-n1)/i;
        i=i*10;
        if(n1%2==0 && n2%2==0) p++;
        else if(n1%2!=0 && n2%2!=0) ip++;
    }
}

int main(){
    int x=-1, p=0, ip=0;
    while (x<=0){
        cout << "Insira um numero inteiro positivo (max: 10 dig): " << endl;
        cin >> x;
        cont(x, p, ip);
    }

    cout << "\nDigitos pares consecultivos: " << p << endl;
    cout << "Digitos impares consecultivos: " << ip;

    return 0;
}
