#include <stdio.h>

int main()
{
	int x, y, s = 0;
	int lixo = scanf(" %d %d", &x, &y);
	for (int i = x-1; i > y; i--)
		if(i % 2 != 0)
			s += i;
	printf("%d\n", s);
	return 0;
}