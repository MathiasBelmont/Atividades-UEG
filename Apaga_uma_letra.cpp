#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define T 30
int main() {
	int i, j;
	char string[T], letra;
	gets(string);
	fflush(stdin);
	scanf("%c",&letra);
	for(i=0; i<strlen(string); i ++) {
		if(string[i]==letra) {
			for(j= i;j<strlen(string);j++)
			{
				string[j]=string[j+1];
			}
		}

	}
	printf("%s",string);
}
