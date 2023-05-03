#include <stdio.h>

int main()
{
	int n, c = 0, r = 0, s = 0, t = 0;
	int lixo = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		int q;
		char a;
		lixo = scanf("%d %c", &q, &a);
		t += q;
		if(a == 'C')
			c += q;
		if(a == 'R')
			r += q;
		if(a == 'S')
			s += q;
	}
	printf("Total: %d cobaias\n"
			"Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n"
			"Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",
			t, c, r, s, c*100.0/t, r*100.0/t, s*100.0/t);
	return 0;
}