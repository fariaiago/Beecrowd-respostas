#include <stdio.h>
#include <math.h>

int main()
{
	double n;
	scanf(" %lf", &n);
	int i = n * 100;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n", i / 10000);
	i %= 10000;
	printf("%d nota(s) de R$ 50.00\n", i / 5000);
	i %= 5000;
	printf("%d nota(s) de R$ 20.00\n", i / 2000);
	i %= 2000;
	printf("%d nota(s) de R$ 10.00\n", i / 1000);
	i %= 1000;
	printf("%d nota(s) de R$ 5.00\n", i / 500);
	i %= 500;
	printf("%d nota(s) de R$ 2.00\n", i / 200);
	i %= 200;

	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", i / 100);
	i %= 100;
	printf("%d moeda(s) de R$ 0.50\n", i / 50);
	i %= 50;
	printf("%d moeda(s) de R$ 0.25\n", i / 25);
	i %= 25;
	printf("%d moeda(s) de R$ 0.10\n", i / 10);
	i %= 10;
	printf("%d moeda(s) de R$ 0.05\n", i / 5);
	i %= 5;
	printf("%d moeda(s) de R$ 0.01\n", i);
	return 0;
}