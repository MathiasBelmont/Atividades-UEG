#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int n,i, Numeros[10],Flag=0/*usamos o flag para testar se ouve alguma interação*/, Checagem;
	for(n=0;n<9;n++)
	{
		scanf("%i",&Numeros[n]);
	}
	system("cls");
	for(n=0;n<=9;n++)
	{
		for(i=n+1;i<=9;i++)
		{
			if(Checagem!=Numeros[i])
			{
			if(Numeros[i]==Numeros[n])
			{
				Checagem = Numeros[i];
				Flag++;
				printf("%i\n",&Numeros[i]);
			}
		  }
		}
	}
	if(Flag==0)
	{
		printf("Não existem valores iguais.");
	}
}
