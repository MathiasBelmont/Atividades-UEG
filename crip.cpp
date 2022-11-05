#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define T 100
int main() {
	int i, cont=0, j, flag, tam,a;
	char string1[T], string2[T];
	gets(string1);
	gets(string2);
	for(i= 0; tam == 0; i++) {
		for(j = 0; j<strlen(string2); j++) 
		{
			if(string1[j]==string2[j]) 
			{
				flag = 1;
			}
		}
		if(flag!=1) 
		{
			cont++;
		}
		for(a = 0; a <strlen(string1-1); a++)
		{
			string1[a] = string1[a+1];
		}
		tam = strcmp(string1, string2);
	}
	printf("%i",cont);
}
