#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str1[32], str_old[32], ali = '\n', bffr;
	int lx, acc = 0;
	while (scanf("%s", str1) == 1)
	{
		
		if (tolower(str1[0]) == tolower(str_old[0]))
		{
			if(tolower(str1[0]) != ali)
			{
				ali = tolower(str1[0]);
				acc++;
			}
		}
		else
			ali = '\n';
		strcpy(str_old, str1);
		lx = scanf("%c", &bffr);
		if (bffr == '\n' || lx != 1)
		{
			printf("%d\n", acc);
			acc = 0;
		}
	}
	return 0;
}