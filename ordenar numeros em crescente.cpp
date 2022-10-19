#include <stdlib.h>
#include <stdio.h>
#define V 5
int main()
{
	int Numero[V], j, i, Guarda1, Guarda2;
	for(i=0;i<V; i++)
	{
		scanf("%i",&Numero[i]);
	}
	for(i=0;i<V;i++)
	{
		for(j=i+1;j<V;j++)
		{
			if(Numero[i]>Numero[j])
			{
				Guarda1 = Numero[i];
				Guarda2 = Numero[j];
				Numero[i] = Guarda2;
				Numero[j] = Guarda1;
			}
		}
	}
	for(i=0;i<V;i++)
	{
		printf("%i\n",Numero[i]);
	}
}
