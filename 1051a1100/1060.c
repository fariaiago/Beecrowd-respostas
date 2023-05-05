#include <stdio.h>

int main()
{
	int c = 0;
	for (int i = 0; i < 6; i++)
	{
		double n = 0;
		int lixo = scanf(" %lf", &n);
		if (n > 0)c++;
	}
	printf("%d valores positivos\n", c);
	return 0;
}