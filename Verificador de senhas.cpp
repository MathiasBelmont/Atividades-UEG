#include <stdio.h>
#include <ctype.h>
#define TAM 8
int main()
{
	char letras[TAM];
	int i, Ver1=0, Ver2=0, Ver3=0, Verif=0;
	do
	{
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
			Ver1++;
		}
		else
		{
			if (isupper(letras[i]))
			{
				Ver2++;
			}
			else
			{
				if(ispunct(letras[i]))
				{
					Ver3++;
				}
			}
		}
	}
if(Ver1==0 || Ver2==0 || Ver3==0)
{
	printf("Senha Invalida!");
	Verif=0;
}
else
{
	Verif=1;
}
}
while(Verif==0);
printf("Senha Valida");
}
