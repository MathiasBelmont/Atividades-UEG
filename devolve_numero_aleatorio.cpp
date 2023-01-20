#include<stdio.h>
#include<stdlib.h>
void BuscaValor(int *Maior, int *Menor)
{
	int i = rand() %1000;
	if(i>*Maior)
	{
		*Maior = i;
	}
	if(i<*Menor)
	{
		*Menor = i;
	}
}
int main()
{
	int Ma=0,Me=500, i;
	for(i=0;i<50;i++)
	{
		BuscaValor(&Ma,&Me);
	}
	printf("Maior Valor = %i\nMenor Valor = %i",Ma,Me);
}
