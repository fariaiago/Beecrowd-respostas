#include <stdio.h>

#define LINHA 12

int main()
{
	int l;
	double n, rs = 0;
	char op;
	int lx = scanf(" %d %c", &l, &op);
	for(int i = 0; i < LINHA * LINHA; i++)
	{
		lx = scanf(" %lf", &n);
		if(i >= LINHA * l && i < LINHA * (l + 1))
			rs += n;
	}
	printf("%.1f\n", op == 'S' ? rs : rs / 12.0);
	return 0;
}