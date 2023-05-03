#include <stdio.h>

int main()
{
	int c2 = 0, c1 = 0, cp = 0, cm = 0;
	for (int i = 0; i < 5; i++)
	{
		int n = 0;
		int lixo = scanf(" %d", &n);
		if (n > 0)
			cp++;
		if (n < 0)
			cm++;
		if (n % 2 != 0)
			c1++;
		if (n % 2 == 0)
			c2++;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",
			c2, c1, cp, cm);
	return 0;
}