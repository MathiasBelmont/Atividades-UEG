#include<stdlib.h>
#include<stdio.h>

int multiplo(int Num1, int Num2)
{
	if(Num1%Num2==0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main()
{
	int num1, num2;
	scanf("%i", &num1);
	scanf("%i", &num2);
	if(multiplo(num1, num2)==0)
	{
		printf("O numero %i nao e multiplo de %i", num1 , num2);
	}
	else 
	{
			printf("O numero %i e multiplo de %i", num1 , num2);
	}
}
