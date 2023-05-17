#include <stdio.h>

int soma();

int main()
{
	int n, s = 0;
	int lixo = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", soma());
	}
	return 0;
}

int soma()
{
	int x, y, s = 0;
	int lixo = scanf(" %d %d", &x, &y);
	for (int i = 0 ; i < y; i++)
		s += (x % 2 == 0) ? x + 2 * i + 1 : x + 2 * i;
	return s;
}