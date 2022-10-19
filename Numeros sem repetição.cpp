#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
int main () {
	int um, dois, tres, quatro;
	for(um = 1 ; um <= 3; um++) {
		for(dois = um + 1 ; dois <= 4 ; dois++) {
			for(tres = dois + 1 ; tres <= 5; tres++ ) {
				for(quatro = tres + 1 ; quatro <= 6 ; quatro++) {
					printf("%d %d %d %d \n", um, dois , tres, quatro);
				}
			}
		}
	}
}
