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
	if(x < y)
	{
		int temp;
		temp = x;
		x = y;
		y = temp;
	}
	for (int i = x-1; i > y; i--)
		if(i % 2 != 0)
			s += i;
	return s;
}