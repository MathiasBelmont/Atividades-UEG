#include <stdio.h>
#include <stdlib.h>
int main()
{
	float Num, Final;
	Final = 0;
	int Cont;
	for(Cont=0;Cont!=5;Cont = Cont + 1)
	{
		scanf("%f",&Num);
		if(Num > Final)
		{
			Final = Num;
		}
	}
	printf("%.2f", Final);
}

