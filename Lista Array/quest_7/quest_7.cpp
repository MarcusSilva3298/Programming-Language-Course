#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Numero de pontos: ";
    cin >> n;
    float x[n], y[n];

    //Somatórios de x
    float ex=0, ex2=0;
    //Somatório de y
    float ey=0;
    //Somatório de x com y
    float exy=0;

    for (int i=0; i<n; i++){
        cout << "Coordenada x do ponto " << i+1 << ": ";
        cin >> x[i];
        ex+= x[i];
        ex2+= (x[i]*x[i]);
    }
    for (int i=0; i<n; i++){
        cout << "Coordenada y do ponto " << i+1 << ": ";
        cin >> y[i];
        ey+= y[i];
        exy+= (x[i]*y[i]);
    }
    float a0= ((ex2 * ey)-(exy * ex))/(n*ex2-(ex*ex));
    float a1= (n*exy-(ex*ey))/(n*ex2-(ex*ex));

    cout << "a1 = " << a1 << "\ta0 = " << a0;

    return 0;
}
