#include<stdio.h>
#include <locale.h>
#define T 100
int main() {
	setlocale(LC_ALL, "Portuguese");
	char Texto[T];
	int ContaCaracteres=0, ContaCaracteresT=0;
	printf("Digite um texto(Máximo 100 caracteres): ");
	gets(Texto);
	while (Texto[ContaCaracteres] != '\0') 
	{
        if(Texto[ContaCaracteres] != ' ')
		{
		ContaCaracteresT++ ;
	    }
	    ContaCaracteres++;
	}
	printf("\n %s possui %d caracteres.",Texto,ContaCaracteresT);
	return 0;
}
