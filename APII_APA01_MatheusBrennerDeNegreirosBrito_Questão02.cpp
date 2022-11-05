#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define T 50
int main()
{   inicio:
	char String[T];
	int flag=0, j=0, i,k;
	gets(String);
	k = strlen(String);
	for(i=0;i<strlen(String);i++)
	{
		if(String[i]== 'a'||String[i]== 'e'||String[i]== 'i'||String[i]== 'o'||String[i]== 'u')
		{
			if(String[k]== 'a'||String[k]== 'e'||String[k]== 'i'||String[k]== 'o'||String[k]== 'u')
			{
				if(String[k]==String[i])
				{
					flag = 1;
				}
			}
			k--;
		}
	}
	if(flag==1){
		printf("S\n");
		flag = 0;
	}
	else
	{
		printf("N\n");
	}
	system("pause");
	system("cls");
	goto inicio;
}
