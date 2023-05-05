#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	int lixo = scanf(" %d %d", &x, &y);
	do
	{
		if(x > y)
			printf("Decrescente\n");
		else
			printf("Crescente\n");
		lixo = scanf(" %d %d", &x, &y);
	} while (x != y);
	
	return 0;
}