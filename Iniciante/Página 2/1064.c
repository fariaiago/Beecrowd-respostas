#include <stdio.h>

int main()
{
	int c = 0;
	double s = 0.0;
	for (int i = 0; i < 6; i++)
	{
		double n = 0;
		int lixo = scanf(" %lf", &n);
		if (n > 0)
		{
			c++;
			s += n;
		}
	}
	printf("%d valores positivos\n%.1f\n", c, s/c);
	return 0;
}