#include<stdio.h>
#include<stdlib.h>
#define T 3
int main()
{
	int Numeros[T][T], i, j, flag;
	for(i=0; i<T; i++)
	{
		for(j=0; j<T; j++)
		{
			scanf("%i",&Numeros[i][j]);
		}
	}
	for(i=0; i<T; i++)
	{
		for(j=0; j<T; j++)
		{
			if(Numeros[i][j]!=Numeros[j][i])
			{
				flag = 1;
			}
		}
	}
	if(flag == 1)
	{
		printf("N");
	}
	else
	{
		printf("S");
	}
}
