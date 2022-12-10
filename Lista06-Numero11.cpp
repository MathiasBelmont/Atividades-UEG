#include<stdio.h>
#include<stdlib.h>
#define T 4
int main()
{
	int Numeros[T][5], i, j, SomaLinha, Total=0;
	for(i=0; i<T; i++)
	{
		SomaLinha = 0;
		for(j=0; j<5; j++)
		{
			scanf("%i",&Numeros[i][j]);
			SomaLinha = SomaLinha + Numeros[i][j];
		}
		printf("%i",SomaLinha);
		Total = Total + SomaLinha;
	}
	printf("%i",Total);
}
