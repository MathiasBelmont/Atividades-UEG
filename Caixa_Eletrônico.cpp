#include<stdio.h>
#include<stdlib.h>
void CaixaEletronico(int ValorRetirado, int *Notas200, int *Notas100, int *Notas50, int *Notas20 , int *Notas10, int *Notas2,int *Notas1)
{
	int Resto;
	if(ValorRetirado%200==0)
	{
		*Notas200 = ValorRetirado/200;
	}
	
}
int main()
{
	int ValorRetirado, N200=0, N100=0, N50=0, N20=0, N10=0, N2=0, N1=0;
	printf("Digite o valor a ser retirado do caixa:");
	scanf("%d\n",&ValorRetirado);
	CaixaEletronico(ValorRetirado, &N200, &N100,&N50, &N20 , &N10,&N2,&N1);
	printf("%i",N200);
}
