#include <stdio.h>

int main()
{
	int c = 0;
	for (int i = 0; i < 5; i++)
	{
		int n = 0;
		int lixo = scanf(" %d", &n);
		if (n % 2 == 0)
		{
			c++;
		}
	}
	printf("%d valores pares\n", c);
	return 0;
}