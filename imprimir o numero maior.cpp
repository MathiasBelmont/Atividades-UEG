#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int NumPar = 0, NumImp = 0, Num, Result;
	scanf("%d",&Num);
	while(Num!=-1){
		Result =(Num % 2);
		if(Result == 0)
		{
			NumPar = NumPar + Num;
		}
		else
		{
			NumImp++;
		}
		scanf("%d",&Num);
	}
	printf("%d\n%d",NumPar, NumImp);
}
