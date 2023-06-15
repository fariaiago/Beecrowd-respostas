#include <stdio.h>

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
				int out;
				if(i > j)
					out = i - j + 1;
				else if(i < j)
					out = j - i + 1;
				else
					out = 1;
				if(j > 1)
					printf(" ");
				printf("%3hd", out);
			}
			puts("");
		}
		lx = scanf(" %d", &o);
		puts("");
	}
	return 0;
}