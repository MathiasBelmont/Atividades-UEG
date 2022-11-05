#include <stdio.h>
#include <string.h>
#define T 100
#define TAMVET 6
typedef char String[T];
int main()
{
 String VetorNomes[TAMVET], NomeBusca;
 int I, Indice = -1;
 printf("Digite %d Nomes: ", TAMVET);
 for(I=0;I<TAMVET;I++)
 {
 gets(VetorNomes[I]);
 }
 printf("Digite um nome para realizar a busca: ");
 gets(NomeBusca);
 for(I=0;I<TAMVET;I++)
 {
 if(stricmp(NomeBusca,VetorNomes[I]) == 0)
 Indice = I;
 }
 if(Indice == -1)
 printf("O nome buscado nao existe no vetor.\n");
 else
 printf("%s existe no vetor na posicao %d.\n",NomeBusca,Indice);
 return 0;
}
