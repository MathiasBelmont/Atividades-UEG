#include<stdio.h>
#include<stdlib.h>
#define T 5
int main()
{
	int Numeros[T][5], i, j, Testemenor, Testemaior, linham,colunam,linhame,coluname;
	for(i=0; i<T; i++)
	{
		for(j=0; j<5; j++)
		{
			scanf("%i",&Numeros[i][j]);
			if(i==1&&j==1)
			{
				Testemenor = Numeros[i][j];
				Testemaior = Numeros[i][j];
			}
			else {
				if (Testemenor>Numeros[i][j])
				{
					Testemenor = Numeros[i][j];
					linhame = i;
					coluname = j;
				}
				if (Testemaior<Numeros[i][j])
				{
					Testemaior = Numeros[i][j];
					linham = i;
					colunam = j;
				}
			}
		}
	}
	for(i=0; i<T; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%i ",Numeros[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("%i\n",linham);
	printf("%i\n",colunam);
	printf("%i\n",linhame);
	printf("%i\n",coluname);
}

