#include <stdio.h>
#include <math.h>

int main(void)
{
	int o;
	int lx = scanf(" %d", &o);
	while (o > 0)
	{
		int len = floor(log10(pow(2, o + o - 2))) + 1;
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				if(j > 0)
					printf(" ");
				printf("%*ld", len, (long) pow(2, i + j));
			}
			puts("");
		}
		lx = scanf(" %d", &o);
		puts("");
	}
	return 0;
}