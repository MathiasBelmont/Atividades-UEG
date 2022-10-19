#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int cont;
	float nota , media , mediafinal;
	cont = 0;
	media = 0;
	printf("Digite suas notas\n ");
	scanf("%f",&nota);
	while(nota != -1)
	{
		cont = cont+1;
		media = media + nota;
		scanf("%f",&nota);
	}
	mediafinal = media / cont;
	printf("Suas notas:%.2f\n", mediafinal);
}
