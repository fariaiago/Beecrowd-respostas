#include <stdio.h>

#define T 100

int main()
{
	double n;
	int lx = scanf(" %lf", &n);
	for(int i = 1; i <= T; i++)
	{
		printf("N[%d] = %.4f\n", (int)(i - 1), n);
		n /= 2.0;
	}
	return 0;
}