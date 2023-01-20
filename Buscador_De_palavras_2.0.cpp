//buscador de palavras em arquivos
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
int main() 
{
	FILE *Arquivo;
	char Palavra[100], PalavraComp[100], Nome[100],caractere;
	int Cont=0, i;
	printf("Digite o nome do arquivo txt:\n");
	gets(Nome);
	strcat(Nome,".txt");
	Arquivo = fopen(Nome, "r");
  printf("Digite a palavra que quer procurar no arquivo :\n");
  gets(Palavra);
  while((caractere = fgetc(Arquivo)) != EOF)
  {
  	printf("%c", caractere);
  	if(caractere == Palavra[0])
  	{
  		PalavraComp[0] = caractere;
  		for(i=1;i<strlen(Palavra);i++)
  		{
  			printf("%c", caractere);
  			caractere = fgetc(Arquivo);
  			PalavraComp[i]= caractere;
  			
			}
			strcat(PalavraComp,"\0");
			if(stricmp(PalavraComp,Palavra)==0)
			{
				Cont++;
			}
		}
		else
		{
			printf("%s",Palavra);
		}
	};
	printf("\nTotal de palavras iguais : %i\n", Cont);
	system("pause");
}

