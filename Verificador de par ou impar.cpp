#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
int main () {
	setlocale(LC_ALL,"portuguese");
	int primeiro, segundo, terceiro;
	for(primeiro = 1 ; primeiro <= 4 ; primeiro++) {
		for(segundo = 13 ; segundo <= 14; segundo++ ) {
			for(terceiro = 60 ; terceiro <= 61 ; terceiro++) {
				printf("%d %d %d ",  primeiro , segundo, terceiro);
				if ((primeiro % 2 == 0)&&(segundo % 2 == 0)&&(terceiro%2 == 0)) {
					printf("Todos são pares \n");
				} else {
					if ((primeiro % 2 != 0)&&(segundo % 2 != 0)&&(terceiro%2 != 0)) {
						printf("Todos são Impares \n");
					} else {
						printf("\n");
					}
				}
			}
		}
	}
}

