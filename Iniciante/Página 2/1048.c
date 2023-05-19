#include <stdio.h>
#include <math.h>

int main()
{
	double s;
	scanf(" %lf", &s);
	double s1, add, prc;
	switch ((int)floor((s - 0.01) / 400))
	{
	case 0:
		prc = 0.15;
		add = s * prc;
		s1 = s + add; 
		break;
	case 1:
		prc = 0.12;
		add = s * prc;
		s1 = s + add;
		break;
	case 2:
		prc = 0.1;
		add = s * prc;
		s1 = s + add;
		break;
	case 3:
	case 4:
		prc = 0.07;
		add = s * prc;
		s1 = s + add;
		break;
	default:
		prc = 0.04;
		add = s * prc;
		s1 = s + add;
		break;
	}
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", s1, add, (int)round(prc * 100));
	return 0;
}