#include <stdio.h>

int main()
{
	int m = 0, n = 0;
	int lixo = scanf(" %d %d", &m, &n);
	do
	{
		int s = 0, temp = 0;
		if(m < n)
		{
			temp = m;
			m = n;
			n = temp;
		}
		for (int i = n; i <= m; i++)
		{
			s += i;
			printf("%d ", i);
		}
		printf("Sum=%d\n", s);
		lixo = scanf(" %d %d", &m, &n);
	} while (m > 0 && n > 0);
	
	return 0;
}