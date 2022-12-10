#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq;
    arq = fopen("urls.txt", "a+");
    char string[100];
    while (*string != '\n' )
    {
        gets(string);
        fprintf(arq, "%s", string);
    }
    fclose(arq);
}
