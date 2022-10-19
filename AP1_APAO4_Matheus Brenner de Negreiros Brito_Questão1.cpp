#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int Arya=0, Melisandre=0, Ramsay=0, Opcao;
	system("cls");
	do 
	{
	  printf("ELEIÇÃO GAME OF THRONES\n1. Arya Stark\n2. Melisandre\n3. Ramsay Bolton\n4. Relatório\n5. Sair\nDigite a opção :\n");
	  scanf("%d", &Opcao);
	  switch (Opcao)
	  {
	  	case 1 :
		  {
	  		Arya++;
	  		system("cls");
			break;
		  }
		  case 2 :
		  {
	  		Melisandre++;
	  		system("cls");
			break;
		  }
		  case 3 :
		  {
	  		Ramsay++;
	  		system("cls");
			break;
		  }
		  case 4 :
		  {
		  	system("cls");
	  		printf("Votos totalizados\nArya Stark : %d \nMelisandre : %d\nRamsay Bolton : %d\n", Arya, Melisandre, Ramsay);
	  		if((Arya>Melisandre)&&(Arya>Ramsay))
			  {
	  			printf("Personagem mais votado : Arya Stark : %d\n", Arya);
			  }
			  else
			   {
			  	if((Melisandre>Arya)&&(Melisandre>Ramsay))
				  {
			  		printf("Personagem mais votado : Melisandre : %d\n", Melisandre);
				  }
				  else
				  {
				  	printf("Personagem mais votado : Ramsay : %d\n", Ramsay);
				  }
			  }
			system("pause");  
			break;
		  }
	  }
	  system("cls");
	}
	while(Opcao!=5);
}
