#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Numero[8], Menor=0, Maior=0, posi��o=0, n;
    for(n=0;n<8;n++)
    {
       // printf("Digite o %i� numero",n+1);
        scanf("%i",&Numero[n]);
        if(Numero[n]>Maior)
        {
            Maior = Numero[n];
        }
        if(Numero[n]<Menor)
        {
            posi��o = n;
            Menor = Numero[n];
        }
    }
    printf("%i \n%i\n%i", Maior, Menor, posi��o);
}
