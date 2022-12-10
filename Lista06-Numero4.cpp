#include<stdio.h>
#include<stdlib.h>
#define T 3
int main()
{
	int Numeros[T][5], i, j;
	for(i=0; i<T; i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%i",&Numeros[i][j]);
		}
	}
	scanf("%i",&j);
	if(j>=0&&j<=4)
	{
		for(i=0; i<T; i++)
		{
			printf("%d\n",Numeros[i][j]);
		}
	}
	else
	{
		printf("coluna inválida!");
	}
}
