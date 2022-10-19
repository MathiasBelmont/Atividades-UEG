#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define T 3
int main()
{
    int i;
    char string[T];
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'&& ispunct(string[i])==0)
        {
            string[i] = '*';
        }
        else
		{
            string[i] = toupper(string[i]);
        }
    }
    printf("%s",string);
}
