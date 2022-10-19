#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
    int Numero;
    float ParOuImpar;
    scanf("%d", &Numero);
    if(Numero>=0){
        ParOuImpar = Numero % 2;
        if(ParOuImpar == 0){
            printf("Número %d é par E positivo.", Numero);
        }
        else {
            printf("Número %d é ímpar E positivo.", Numero);
        }
    }
    else {
        ParOuImpar = Numero % 2;
        if(ParOuImpar == 0){
            printf("Número %d é par E negativo.", Numero);
        }
        else {
            printf("Número %d é ímpar E negativo", Numero);
        }
    }
}
