#include <stdio.h>

int main()
{
	double map[] = {0.00, 4.00, 4.50, 5.00, 2.00, 1.50};
	int t, n;
	scanf(" %d %d", &t, &n);
	printf("Total: R$ %.2f\n", map[t]*n);
	return 0;
}