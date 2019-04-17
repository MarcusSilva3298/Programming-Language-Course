#include <iostream>
using namespace std;

int main(){
    int rst[20] = {0, 1};
    for (int i=2; i<20; i++){
        rst[i] = rst[i-1] + rst[i-2];
    }
    for (int i=0; i<20; i++){
        cout << rst[i] << ", ";
    }

    return 0;
}
