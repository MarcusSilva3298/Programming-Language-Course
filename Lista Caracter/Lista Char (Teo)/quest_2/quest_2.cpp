#include <iostream>
#include <cstring>
#define tam 100
using namespace std;

bool ehSubstring (char s1[tam], char s2[tam]){
	int ls1 = strlen(s1), ls2 = strlen(s2), cont = 0;
	for (int i=0; i<ls2; i++){
		for (int j=0; j<ls1; j++){
			if (s2[i] == s1[j]){
				cont++;
				break;
			}
		}
	}

	bool rst;
	if (cont == ls2) rst = true;
	else rst = false;

	return rst;
}

int main(){
	char s1[tam], s2[tam];
	cout << "Insira os caracteres: ";
	cin.getline(s1, tam);
	cout << "Quais caracteres deseja conferir: ";
	cin.getline(s2, tam);

	bool rst = ehSubstring(s1, s2);
	if (rst == true) cout << s2 << " eh substring de " << s1;
	else cout << s2 << " nao eh substring de " << s1;

	return 0;
}
