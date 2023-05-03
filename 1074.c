#include <stdio.h>

int main()
{
	int n;
	int lixo = scanf(" %d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x;
		lixo = scanf(" %d", &x);
		if(x != 0)
		{
			printf("%s %s", x % 2 == 0 ? "EVEN" : "ODD",
					x > 0 ? "POSITIVE" : "NEGATIVE");
		}
		else
			printf("NULL");
		printf("\n");
	}
	return 0;
}