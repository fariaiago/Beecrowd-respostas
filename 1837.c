#include <stdio.h>

int ab(int);

int main()
{
    int a, b, q = 0, r = 0;
    int lixo = scanf(" %d %d", &a, &b);
	q = a / b;
	r = a % b;
	if(r < 0)
		r += ab(b);
	q = (a - r) / b;
    printf("%d %d\n", q, r);
    return 0;
}

int ab(int a)
{
	return a < 0 ? -a : a;
}