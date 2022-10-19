#include <stdlib.h>
#include <stdio.h>
#define VA 8
int main()
{
	int Numero[8], Nx, Ny, Nj, Ni;
	for(Nj=0; Nj<8; Nj++)
	{
		scanf("%d", &Numero[Nj]);
	}
	scanf("%d", &Nx);
	scanf("%d", &Ny);
	Nj = Nx; 
	Ni = Ny;
	Nx = Numero[Nj];
	Ny = Numero[Ni];
	Numero[Ni] = Nx;
	Numero[Nj] = Ny;
	for(Nj=0; Nj<8; Nj++)
	{
		printf("%d\n",Numero[Nj]);
	}
}
