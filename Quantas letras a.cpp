#include <stdio.h>
#define TAM 8
int main()
{
	char letras[TAM];
	int i, cont=0;
	printf("informe 8 caracteres:");
	for(i=0;i<TAM;i++)
	{
		fflush(stdin);
		scanf("%c",&letras[i]);
	}
	for(i=0;i<TAM;i++)
	{
		if(letras[i]=='a')
		{
			cont++;
		}
	}
	printf("Esse vetor possui %i letras 'a'",cont);
}
