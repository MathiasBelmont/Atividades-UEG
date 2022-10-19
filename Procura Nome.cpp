#include<stdio.h>
#include <locale.h>
#define T 40
int main()
{
 setlocale(LC_ALL, "Portuguese");
 char NomeCliente[T],CaracterProcurado;
 int ContaCaracteres=0,I=0;
 printf("Nome do cliente: ");
 gets(NomeCliente);
 printf("Caracter para procurar: ");
 scanf("%c",&CaracterProcurado);
 while (NomeCliente[I] != '\0')
 {
 if(NomeCliente[I]==CaracterProcurado)
 {
 ContaCaracteres++ ;
 }
 I++;
 }
 printf("\n O caracter %c aparece %d vezes no nome do cliente.",CaracterProcurado,ContaCaracteres);
 return 0;
}

