#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main() {
	int Andar1, Andar2, Andar3, Minutos;
	scanf("%i",&Andar1);
	scanf("%i",&Andar2);
	scanf("%i",&Andar3);
	system("cls");
	if((Andar1>Andar2)&&(Andar1>Andar3))
	{
		Minutos = ((Andar2*2) + (Andar3*4));
		printf("%i",Minutos);
	} else 
	{
		if((Andar2>Andar1)&&(Andar2>Andar3)) 
		{
			Minutos = ((Andar1*2) + (Andar3*2));
			printf("%i",Minutos);
		} else 
		{
			if((Andar3>Andar2)&&(Andar1<Andar3)) 
			{
				Minutos = ((Andar2*2) + (Andar1*4));
				printf("%i",Minutos);
			}
		}
	}
} 
