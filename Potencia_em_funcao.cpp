#include<stdio.h>
#include<locale.h>
int Potencia(int Base, int Expoente)
{
	int I, Pot = 1;
	for(I=1; I<=Expoente; I++)
	{
		Pot *= Base;
	}
	return Pot;
}

int main()
{
	int Num1, Num2;
	scanf("%i", &Num1);
	scanf("%i", &Num2);
	printf("Valor final : %i",Potencia(Num1,Num2));
}
