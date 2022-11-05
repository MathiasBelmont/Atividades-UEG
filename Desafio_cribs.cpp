#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define T 100
int
main () {
	char crib[T], palavra[T];
	int cont=0, flag, dif, i, j, testes=0;
	gets(crib);
	gets(palavra);
	dif = strlen(crib);
	dif = dif - strlen(palavra);
	dif++;
	for(i=0; i<dif; i++) {
		for(j= 0 ; j<strlen(palavra); j++) {
			if(palavra[j]==crib[j+i]) {
				flag = 1;
			}
		}
		if(flag==1) {
			flag = 0;
			cont++;
		}
		testes++;
	}
	testes = testes - cont;
	printf("%i",testes);
}

