#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int o;
	int lx = scanf(" %d", &o);
	while (o > 0)
	{
		for (int i = 1; i <= o; i++)
		{
			for (int j = 1; j <= o; j++)
			{
				int x = floor((o+1)/2.0 - abs(j - (o+1)/2.0));
				int y = floor((o+1)/2.0 - abs(i - (o+1)/2.0));
				if(j == 1)
					printf("%3hd", x < y ? x : y);
				else
					printf(" %3hd", x < y ? x : y);
			}
			puts("");
		}
		lx = scanf(" %d", &o);
		puts("");
	}
	return 0;
}