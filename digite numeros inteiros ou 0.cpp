#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero, quantidade , soma;
	quantidade = 0;
	printf("Digite n�meros inteiros ou 0 para sair\n");
	scanf("%d",&numero);
	soma = numero;
	while(numero!=0) {
		quantidade=quantidade + 1;
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("Fim do la�o\n");
	printf("Foram digitados %d\n",quantidade);
	printf("A soma de todos os numeros � :%d\n",soma);

