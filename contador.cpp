#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	numero = 3;
	while (numero != 11) {
		printf("%d\n",numero);
		numero = numero + 1;
	}
}
