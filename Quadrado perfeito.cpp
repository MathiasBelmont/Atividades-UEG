#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese");
	int num, raiz, soma, somatotal;
	printf("Digite um numero que tenha uma raiz quadrada perfeita : \n");
	scanf("%d", &num);
	somatotal = 0;
	raiz = 0;
	for(soma = 1; num != somatotal; soma = soma + 2) {
		if(somatotal>=100) {
			break;
		}
		somatotal = somatotal + soma;
		raiz = raiz + 1;
	}
	if(somatotal >=100) {
		printf("quadrado não perfeito \n");
	} else {
		printf("Raiz de %d é igual á %d\n",num , raiz);
		system("pause");
	}
}

