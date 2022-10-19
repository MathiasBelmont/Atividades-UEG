#include <stdio.h>
#include <ctype.h>
#define TAM 8
int main()
{
	char letras[TAM];
	int i, cont=0, contu=0, contp=0;
	printf("informe %i caractere(s):",TAM);
	for(i=0;i<TAM;i++)
	{
		fflush(stdin);
		scanf("%c",&letras[i]);
	}
	for(i=0;i<TAM;i++)
	{
		if(islower(letras[i]))
		{
			cont++;
		}
		else
		{
			if (isupper(letras[i]))
			{
				contu++;
			}
			else
			{
				if(ispunct(letras[i]))
				{
					contp++;
				}
			}
		}
	}
	printf("Esse vetor possui %i letra(s) minusculas \n",cont);
	printf("Esse vetor possui %i letra(s) maiusculas \n",contu);
	printf("Esse vetor possui %i letra(s) especiais \n",contp);
}
