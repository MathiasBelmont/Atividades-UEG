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
            printf("N�mero %d � par E positivo.", Numero);
        }
        else {
            printf("N�mero %d � �mpar E positivo.", Numero);
        }
    }
    else {
        ParOuImpar = Numero % 2;
        if(ParOuImpar == 0){
            printf("N�mero %d � par E negativo.", Numero);
        }
        else {
            printf("N�mero %d � �mpar E negativo", Numero);
        }
    }
}
