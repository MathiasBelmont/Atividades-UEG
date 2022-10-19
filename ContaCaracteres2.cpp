#include<stdio.h>
#include <locale.h>
#define T 40
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char NomeCliente[T],CaracterProcurado1, CaracterProcurado2;
	int ContaCaracteres1=0,I=0,ContaCaracteres2=0;
	printf("Nome do cliente: ");
	gets(NomeCliente);
	printf("Caractere para procurar: ");
	scanf("%c",&CaracterProcurado1);
	printf("Segundo Caractere :");
	fflush(stdin);
	scanf("%c",&CaracterProcurado2);
	while (NomeCliente[I] != '\0')
	{
		if(NomeCliente[I]==CaracterProcurado1)
		{
			ContaCaracteres1++ ;
		}
		else
		{
			if(NomeCliente[I]==CaracterProcurado2)
			{
				ContaCaracteres2++ ;
			}
		}
		I++;
	}
	printf("\n O caracter %c aparece %d vezes e o caracter %c aparece %d vezes no nome do cliente.",CaracterProcurado1,ContaCaracteres1 , CaracterProcurado2,ContaCaracteres2 );
	return 0;
}

