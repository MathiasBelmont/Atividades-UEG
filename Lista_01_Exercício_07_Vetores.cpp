#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int Vetor1[10], Vetor2[10], Vetor3[10], n;
	for(n=0;n<10;n++)
	{
		scanf("%i",&Vetor1[n]);
	}
	system("cls");
	for(n=0;n<10;n++)
	{
		scanf("%i",&Vetor2[n]);
	}
	system("cls");
	for(n=0;n<10;n++)
	{
		Vetor3[n]=Vetor1[n] + Vetor2[n];
	}
	for(n=0;n<10;n++)
	{
		printf("%i",Vetor3[n]);
	}
}
