#include <stdio.h>
#include <stdlib.h>
int main()
{
  int Numero1, Numero2, Numero3;
  for(Numero1=1;Numero1<=3;Numero1= Numero1 + 2)
  {
  	for(Numero2=10;Numero2<=13;Numero2= Numero2 + 3)
	  {
	  	for(Numero3=6;Numero3<=8;Numero3= Numero3 + 1)
	  	  {
	  		printf("%d %d %d\n", Numero1, Numero2 , Numero3);
	      }
	  }
  } 
}
