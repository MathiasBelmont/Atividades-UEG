#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
    FILE *arq;
    char string[1000], nome[100];
    printf("Digite o nome do arquivo txt que quer criar ou editar :\n");
    gets(nome);
    strcat(nome, ".txt");
    arq = fopen(nome, "a+");
    printf("Digite o que quiser guardar no arquivo ou enter para sair\n");
    while (*string != '\0' )
    {
    	
        gets(string);
        fprintf(arq, "%s\n", string);
    }
    fclose(arq);
}
