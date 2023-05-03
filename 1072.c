#include <stdio.h>

int main()
{
	int n, ci = 0, co = 0;
	int lixo = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		int x;
		lixo = scanf(" %d", &x);
		if(x >= 10 && x <= 20)
			ci++;
		else
			co++;
	}
	printf("%d in\n%d out\n", ci, co);
	return 0;
}