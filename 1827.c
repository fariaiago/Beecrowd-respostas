#include <stdio.h>
#include <math.h>

int main(void)
{
	int o;
	while (scanf(" %d", &o) != EOF)
	{
		int o2 = o / 2;
		double o3 = o / 3.0;
		for (int i = 0; i < o; i++)
		{
			for (int j = 0; j < o; j++)
			{
				int out;
				if(i == o2 && j == o2)
					out = 4;
				else if(i >= floor(o3) && i < o3*2 && j >= floor(o3) && j < o3*2)
					out = 1;
				else if(i == j)
					out = 2;
				else if(i == o - j - 1)
					out = 3;
				else
					out = 0;
				printf("%d", out);
			}
			puts("");
		}
		puts("");
	}
	return 0;
}