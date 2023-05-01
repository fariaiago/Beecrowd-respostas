#include <stdio.h>

int main()
{
	int n;
	scanf(" %d", &n);
	int a = n / 365, m = (n % 365) / 30, d = (n % 365) % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
	return 0;
}