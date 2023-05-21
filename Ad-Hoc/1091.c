#include <stdio.h>

int main()
{
	int k, n, m;
	int lx = scanf(" %d", &k);
	while(k != 0)
	{
		lx = scanf(" %d %d", &n, &m);
		for (int i = 0; i < k; i++)
		{
			int x, y;
			lx = scanf(" %d %d", &x, &y);
			if(x > n && y > m)
				printf("NE\n");
			else if(x < n && y > m)
				printf("NO\n");
			else if(x < n && y < m)
				printf("SO\n");
			else if(x > n && y < m)
				printf("SE\n");
			else
				printf("divisa\n");
		}
		lx = scanf(" %d", &k);
	}
	return 0;
}