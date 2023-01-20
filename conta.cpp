#include<stdio.h>
float Fat(float Numero)
{
	float i=0, Fatoriando=Numero;
	for(i=1;i<Fatoriando;i++)
	{
		Numero*=i;
	}
	return Numero;
}
float Conta(int *N)
{
	int S;
	S=1 + 1\Fat(1) + 1\Fat(2)+ 1\Fat(3) + 1 \Fat(*N);
	return S;
}
int main()
{
	int N;
	float Resultado;
	scanf("%i",&N);
	Resultado = Conta(&N);
	printf("%.2f",Resultado);
}
