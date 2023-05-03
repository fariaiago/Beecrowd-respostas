#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;
	scanf(" %d %d %d %d", &h1, &m1, &h2, &m2);
	int a = h1 * 60 + m1, b = h2 * 60 + m2;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",
			a == b ? 24 : a < b ? (b - a) / 60 : (1440 + b - a) / 60,
			a == b ? 0 : a < b ? (b - a) % 60 : (1440 + b - a) % 60);
	return 0;
}