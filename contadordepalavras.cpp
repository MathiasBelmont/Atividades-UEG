#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define T 30
int main()
{
	int cont=1, i;
	char string[T];
	gets(string);
	for(i=0;i<strlen(string);i++)
	{
		if(isspace(string[i])!=0)
		{
			cont++;
		}
	}
	printf("%i", cont);
}
