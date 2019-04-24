#include <iostream>
#include <iomanip>
using namespace std;

float maior(float x, float y, float z){
    float mr=x;
    if (mr<y) mr = y;
    if (mr<z) mr = z;

    return mr;
}

int main(){
    float x, y, z, mr;
    cout << "Insira os tres valores que deseja testar: ";
    cin >> x >> y >> z;
    mr = maior(x, y, z);
    cout << "Maior numero: " << setprecision(2) << mr;

    return 0;
}
