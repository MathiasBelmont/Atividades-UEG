#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define T 100
int main() {
	int i, cont=0, j, flag;
	char string1[T], string2[T];
	gets(string1);
	gets(string2);
	for(i= 0; strlen(string1)!=strlen(string2); i++) {
		for(j = 0; j<strlen(string2); j++) {
			if(string1[j]==string2[j]) {
				flag = 1;
			}
		}
		if(flag!=1) {
			cont++;
		}
		i = 0;
		j= i +1;
		string1[i]= string1[j];
		for(j=i+1; j<strlen(string1-1); j++) {
			string1[j]= string1[j+1];
		}
	}
	printf("%i",cont);
}
