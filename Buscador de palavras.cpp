#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define T 100
int main()
{
	FILE *Arquivo;
	int i, Cont=0;
	char Nome[T], String[T], Palavra[T], caracter;
	printf("Digite o nome do arquivo\n");
	gets(Nome);
	Arquivo = fopen(Nome,"r");
	printf("Digite a palavra para ser encontrada\n");
	gets(Palavra);
	while((caracter = fgetc(Arquivo))!= EOF)
	{
		printf("%c",caracter);
		if(caracter != ' ')
		{
			String[i++] = caracter;
		}
		else
		{
			String[i]='\0';
			if(stricmp(Palavra,String)==0)
			{
			  Cont++;
			  printf("\n§%s--%s§\n",Palavra,String);
		  }
			i = 0;
		}
	}
	if(stricmp(Palavra,String)==0)
			{
			Cont++;
		}
		printf("\n%i",Cont);
}
