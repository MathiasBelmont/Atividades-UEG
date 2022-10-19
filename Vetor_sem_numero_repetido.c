#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int Numero[10], i , j, flag;
	for(i=0;i<10;i++)
	{
		printf("Vetor[%d]:",i);
		scanf("%d",&Numero[i]);
		if(i>0)
		{
			do
			{
				flag = 0;
				for(j=i-1;j>=0 ; j--)
				{
					if(Numero[j]==Numero[i])
					{
						flag = 1;
						printf("Erro , Numero já digitado!\n");
					}
				}
				if(flag==1)
				{
				printf("Vetor[%d]:",i);
				scanf("%d",&Numero[i]);
			    }
			}
			while(flag==1);
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d",Numero[i]);
	}
}
	
