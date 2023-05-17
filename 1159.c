#include <stdio.h>

int main()
{
	int n, s = 0;
	int lx = scanf(" %d", &n);
	while(n != 0)
	{
		for (int i = 0 ; i < 5; i++)
			s += (n % 2 == 0) ? n + 2 * i : n + 2 * i + 1;
		printf("%d\n", s);
		lx = scanf(" %d", &n);
		s = 0;
	}
	return 0;
}