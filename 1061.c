#include <stdio.h>

int ler();

int main()
{
	int t1 = ler();
	int t2 = ler();
	int dif = t2 - t1, r1 = dif%86400, r2 = r1%3600, r3 = r2%60;
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",
			dif/86400, r1/3600, r2/60, r3);
	return 0;
}

int ler()
{
	int d, h, m, s;
	int lixo = scanf("%*s %d %d %*c %d %*c %d", &d, &h, &m, &s);
	return d*86400 + h*3600 + m*60 + s;
}