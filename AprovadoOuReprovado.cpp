#include<stdlib.h>
#include<stdio.h>
int main()
{
    int Faltas;
    float Media, Nota1, Nota2;
    printf("Nota 1:");
    scanf("%f",&Nota1);
    printf("\n");
    printf("Nota 2:");
    scanf("%f",&Nota2);
    printf("\n");
    printf("Faltas:");
    scanf("%d",&Faltas);
    printf("\n");
    if(Faltas>12){
        Media =(((Nota1) * 2 + (Nota2 * 3)) / 5);
        printf("Media: %.1f",Media);
        printf("Reprovado!");
    }
    else{
        Media = (Nota1 * 2 + Nota2 * 3)/ 5;
        printf("Media: %.1f\n",Media);
        if(Media >= 6.0){
            printf("Aprovado!");
        }
        else{
            printf("Reprovado!");
        }
    }
    }
