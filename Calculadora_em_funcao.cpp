#include<stdio.h>
#include<locale.h>
float soma(float num1,float num2) {
	return num1 + num2;
}
float divisao(float num1,float num2) {
	return num1 / num2;
}
float multiplicacao(float num1,float num2) {
	return num1 * num2;
}
float subtracao(float num1,float num2) {
	return num1 - num2;
}

int main() {
	float num1, resultado, num2;
	char cha;
	scanf("%f", &num1);
	scanf("%c", &cha);
	scanf("%f", &num2);
	fflush(stdin);
	switch (cha) {
		case '+' :
			resultado = soma(num1, num2);
			break;
		case '-' :
			resultado = subtracao(num1, num2);
			break;
		case '*' :
			resultado = multiplicacao(num1, num2);
			break;
		case '/' :
			resultado = divisao(num1, num2);
			break;
	}
	printf("Resultado = %.2f",resultado);
	do
	{
		scanf("%c",&cha);
		fflush(stdin);
		scanf("%i",&num1);
		switch (cha) {
		case '+' :
			resultado = soma(num1, num2);
			break;
		case '-' :
			resultado = subtracao(num1, num2);
			break;
		case '*' :
			resultado = multiplicacao(num1, num2);
			break;
		case '/' :
			resultado = divisao(num1, num2);
			break;
	}
	printf("Resultado = %.2f",resultado);
	}
	while(cha!='F');
}
