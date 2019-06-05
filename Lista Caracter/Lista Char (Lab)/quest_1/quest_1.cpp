#include <iostream>
#include <cstring>
#define tam 100
using namespace std;

int strtlen(char v[tam]){
    int cont=0;
    while (v[cont] != '\0') cont++;

    return cont;
}

void strtcpy(char v[tam]){
    char dest[tam];
    int cont=0;
    while (v[cont] != '\0'){
        dest[cont] = v[cont];
        cont ++;
        cout << dest[cont];
    }
}

void strtcat(char v[tam], char b[tam], int strl1, int strl2){
    char cat[2*tam];
    int cont=0;
    while (cont <= (strl1 + strl2)){
        if (v[cont]=='\0'){
            for (int i=0; i<(tam*2); i++){
                if (i<strl1) cat[i] = v[i];
                else cat[i] = b[i-strl1];
            }
            break;
        }
        cont++;
    }

    for (int i=0; i<(tam*2); i++){
        cout << cat[i];
    }
}

int main(){
    char v[tam], b[tam];
    cout << "Insira a primeira palavra ou frase: ";
    cin.getline(v, tam);
    cout << "Insira a segunda palavra ou frase: ";
    cin.getline(b, tam);

    for (int i=0; i<tam; i++){
        cout << v[i];
    }

    int strl1, strl2;
    strl1 = strtlen(v);
    strl2 = strtlen(b);

    cout << "Tamanho da string 1: " << strl1 << "\t Tamanho da string 2: " << strl2 << endl;

    strtcpy(v);
    strtcat(v, b, strl1, strl2);

    return 0;
}
