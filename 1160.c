#include <stdio.h>
#include <math.h>

int main()
{
	int t, p1, p2, pos = -1;
	double c1, c2;
	int lixo = scanf(" %d", &t);
	for(int i = 0; i < t; i++)
	{
		lixo = scanf(" %d %d %lf %lf", &p1, &p2, &c1, &c2);
		int pi1 = p1, pi2 = p2;
		for(int j = 0; j < 100; j++)
		{
			p1 += (int)floor(p1 * (c1/100.0));
			p2 += (int)floor(p2 * (c2/100.0));
			if(p1 > p2)
			{
				pos = j;
				break;
			}
		}
		//double t = (log(pi1) - log(pi2)) / (log(1.0 + (c2 / 100.0) ) - log(1.0 + (c1 / 100.0) ));
		if(pos >= 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", pos + 1);
		pos = -1;
	}
	return 0;
}