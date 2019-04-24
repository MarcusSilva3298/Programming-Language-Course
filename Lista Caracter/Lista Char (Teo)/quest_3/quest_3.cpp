#include <iostream>
#include <cstring>
#define tam 100
using namespace std;

void letrasComuns(char s1[tam], char s2[tam]){
    int ls1 = strlen(s1), ls2 = strlen(s2), cont=0;
    if (ls1<=ls2){
        char s3[ls1];
        for (int i=0; i<ls1; i++){
            for (int j=0; j<ls2; j++){
                if (s1[i] == s2[j]){
                    char aux = s2[j];
                    bool cmp=false;
                    for (int k=0; k<=cont; k++){
                        for (int l=0; l<=cont; l++){
                            if (aux == s3[l]){
                                cmp = true;
                                break;
                            }
                            if (cmp == true) break;
                        }
                    }
                    if (cmp == false){
                        s3[cont] = s2[j];
                        cont++;
                    }
                    break;
                }
            }
        }
        cout << s3;

    }else{
        char s3[ls2];
        for (int i=0; i<ls2; i++){
            for (int j=0; j<ls1; j++){
                if (s2[i] == s1[j]){
                    char aux = s1[j];
                    bool cmp=false;
                    for (int k=0; k<=cont; k++){
                        for (int l=0; l<=cont; l++){
                            if (aux == s3[l]){
                                cmp = true;
                                break;
                            }
                            if (cmp == true) break;
                        }
                    }
                    if (cmp == false){
                        s3[cont] = s1[j];
                        cont++;
                    }
                    break;
                }
            }
        }
        cout << s3;

    }
}
int main(){
    char s1[tam], s2[tam];
    cout << "Insira os primeiros caracteres: ";
    cin.getline(s1, tam);
    cout << "Insira os segundos caracteres: ";
    cin.getline(s2, tam);

    return 0;
}
