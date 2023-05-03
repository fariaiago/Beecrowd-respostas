#include <stdio.h>

int main()
{
	int n;
	int lixo = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		double a, b, c;
		lixo = scanf(" %lf %lf %lf", &a, &b, &c);
		printf("%.1f\n", (a*2.0+b*3.0+c*5.0)/10.0);
	}
	return 0;
}