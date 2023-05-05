#include <stdio.h>

int sqnc(int);

int main()
{
	int n;
	for (int i = 1; scanf(" %d", &n) == 1; i++)
	{
		printf("Caso %d: %d numero%s\n", i, sqnc(n), n > 0 ? "s" : "");
		printf("0");
		for (int j = 1; j <= n; j++)
		{
			for (int k = 0; k < j; k++)
			{
				printf(" %d", j);
			}
		}
		printf("\n\n");
	}
	return 0;
}

int sqnc(int pos)
{
	if(pos == 0)
		return 1;
	return sqnc(pos - 1) + pos;
}