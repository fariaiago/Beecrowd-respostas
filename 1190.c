#include <stdio.h>

#define LINHA 12

int main()
{
	double n, rs = 0;
	char op;
	int lx = scanf(" %c", &op);
	for(int i = 0; i < LINHA * LINHA; i++)
	{
		lx = scanf(" %lf", &n);
		if(i % LINHA >= LINHA - (i / LINHA) && i % LINHA > i / LINHA)
			rs += n;
	}
	printf("%.1f\n", op == 'S' ? rs : rs / 30.0);
	return 0;
}