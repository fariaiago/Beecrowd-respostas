#include <stdio.h>

int main()
{
	int val = 0, pos = 0;
	for (int i = 0; i < 100; i++)
	{
		int t;
		int lixo = scanf(" %d", &t);
		if(t > val)
		{
			val = t;
			pos = i + 1;
		}
	}
	printf("%d\n%d\n", val, pos);
	return 0;
}