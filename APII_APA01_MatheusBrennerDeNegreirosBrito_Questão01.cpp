#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5
int main()
{
	int Vetor1[T],  Vetor2[T], VetorFinal[T*2], i, j=0, k=0;
	printf("Digite os 5 valores inteiros do vetor 1 :");
	for(i=0;i<T;i++)
	{
		scanf("%i",&Vetor1[i]);
	}
	printf("Digite os 5 valores inteiros do vetor 2 :");
	for(i=0;i<T;i++)
	{
		scanf("%i",&Vetor2[i]);
	}
	for(i=0;i<T*2;i++)
	{
		if(i==0||(i % 2 ==0))
		{
			VetorFinal[i]= Vetor1[j];
			j++;
		}
		else
		{
			VetorFinal[i]= Vetor2[k];
			k++;
		}
	}
	printf("Valores do Vetor 3 :");
	for(i=0;i<T*2;i++)
	{
		printf("%i ",VetorFinal[i]);
	}
}
