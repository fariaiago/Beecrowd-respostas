#include <stdio.h>

int main()
{
	int a, b;
	scanf(" %d %d", &a, &b);
	int resto = a > b ? a % b : b % a;
	printf("%s Multiplos\n", resto == 0 ? "Sao" : "Nao sao");
	return 0;
}