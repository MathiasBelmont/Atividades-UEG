#include <stdlib.h>
#include <stdio.h>
#define V 5
int main()
{
	int NumeroCandidatos;
	scanf("%i",&NumeroCandidatos);
	int Candidatos[NumeroCandidatos], flag=0, i;
	for(i=0; i<NumeroCandidatos;i++)
	{
		scanf("%i",&Candidatos[i]);
	}
	for(i=1;i<NumeroCandidatos;i++)
	{
		if(Candidatos[0]<Candidatos[i])
		{
			flag = 1;
		}
	}
	if(flag==1)
	{
		printf("N");
	}
	else
	{
		printf("S");
	}
}
