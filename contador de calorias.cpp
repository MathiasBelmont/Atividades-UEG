#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int Pedido, Calorias, peso, LaVelocidade;
	float total;
	do{
	printf("1-Lagarto de boi assado (100 gramas) \n");
	printf("2-Leit�o (100 gramas)\n");
	printf("3-Peito de frango s/pele (100 gramas) \n");
	printf("4-Rabo de porco salgado (100 gramas)\n");
	printf("5-Moela de galinha (100 gramas)\n");
	printf("6-Picanha (100 gramas) \n");
	printf("7-Banana prata (100 gramas)\n");
	printf("8-P�o franc�s (50 gramas)\n ");
	printf("9-batata frita com cheddar (100 gramas) \n");
	printf("10-Milk-Shake (100 gramas)\n");
	scanf("%d",&Pedido);
	system("cls");
	printf("Quanto voc� pesa?\n");
	scanf("%d",&peso);
	system("cls");
	printf("Para gastar as calorias deste prato de comida voc� dever� correr ou caminhar \n");
	printf("Em quantos quilom�ros por hora voc�caminhar�ou correr�?\n");
	scanf("%d", &LaVelocidade);
	switch (Pedido){
		case 1 :{
			Calorias = 170;
			break;
		}
		case 2 :{
			Calorias = 308;
			break;
		}
		case 3 :{
			Calorias = 100;
			break;
		}
		case 4 :{
			Calorias = 426;
			break;
		}
		case 5 :{
			Calorias = 78;
			break;
		}
		case 6 :{
			Calorias = 287;
			break;
		}
		case 7 :{
			Calorias = 97;
			break;
		}
		case 8 :{
			Calorias = 135;
			break;
		}
		case 9 :{
			Calorias = 430;
			break;
		}
		case 10 :{
			Calorias = 112;
			break;
		}
	}
	total = LaVelocidade * peso * 0.0175;
	total = Calorias / total;
	printf("Calorias do alimento : %d\n", Calorias);
	printf("Voc� ter�que correr %.2f minutos na velocidade %d para queimar toda a caloria\n", total , LaVelocidade);
	system("pause");
	}
	while(Pedido!=0);
}
