#include <stdio.h>
#include <string.h>

int main()
{
	char strA[20];
	char strB[20];
	char strC[20];
	char print[20];
	scanf(" %s %s %s", strA, strB, strC);
	if(strcmp(strA, "vertebrado") == 0)
	{
		if(strcmp(strB, "ave") == 0)
		{
			if(strcmp(strC, "carnivoro") == 0)
			{
				strcpy(print, "aguia");
			}
			else
			{
				strcpy(print, "pomba");
			}
		}
		else
		{
			if(strcmp(strC, "onivoro") == 0)
			{
				strcpy(print, "homem");
			}
			else
			{
				strcpy(print, "vaca");
			}
		}
	}
	else
	{
		if(strcmp(strB, "inseto") == 0)
		{
			if(strcmp(strC, "hematofago") == 0)
			{
				strcpy(print, "pulga");
			}
			else
			{
				strcpy(print, "lagarta");
			}
		}
		else
		{
			if(strcmp(strC, "hematofago") == 0)
			{
				strcpy(print, "sanguessuga");
			}
			else
			{
				strcpy(print, "minhoca");
			}
		}
	}
	printf("%s\n", print);
	return 0;
}