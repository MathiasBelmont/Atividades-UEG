#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, Idades[10], Comparar, indice=-333;
	for(n=0;n<=9;n++)
	{
		scanf("%i",&Idades[n]);
	}
	printf("\\");
	scanf("%i",&Comparar);
	for(n=0;n<=9;n++)
	{
		if(Idades[n]==Comparar)
		{
			indice = n;
		}
	}
	if(indice==-333)
	{
		printf("Numero não encrontado!");
  }
  else
	{
	printf("%i",indice);
  }
}
