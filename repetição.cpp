#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, b, c;
	a = 4;
	b = 11;
	c = 0;
	while(a<=5){
		while(b<=12){
			while(c<=1){
				printf("%i - %i - %i\n", a, b, c);
				c++;
			}
			c--;
			b++;
		}
		a++;
		b--;
	}
	
}
