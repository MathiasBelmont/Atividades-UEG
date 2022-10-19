#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
	int Num, Vezes;
	for(Num = 1;Num <= 10 ; Num++){
		printf("Tabuada do %d :", Num);
		for(Vezes = 1; Vezes <= 10; Vezes++){
			printf(" %d, ",Num*Vezes);
		}
			printf("\n");
	}
}
