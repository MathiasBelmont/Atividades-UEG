#include<stdio.h>
#include<stdlib.h>
#define T 5
int main()
{
	int Numeros[T][6], i, j;
	int SomaFila, SomaColuna=0;
	for(i=0; i<T; i++)
	{
		SomaFila = 0;
		for(j=0; j<6; j++)
		{
			scanf("%i",&Numeros[i][j]);
			SomaFila = SomaFila + Numeros[i][j];
		}
		printf("%i\n",SomaFila);
	}
	printf("\n\n");
	for(j=0; j<6; j++)
	{
		SomaColuna = 0;
		for(i=0; i<T; i++)
		{
			SomaColuna = SomaColuna + Numeros[i][j];
		}
		printf("%i\n",SomaColuna);
	}
}
