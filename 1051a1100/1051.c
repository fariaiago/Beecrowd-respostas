#include <stdio.h>

double clmp(double, double);

int main()
{
	double s;
	int lixo = scanf(" %lf", &s);
	double s2 = 0.0;
	if(s > 4500.0)
		s2 += (s - 4500.0) * 0.28;
	if(s > 3000.0)
		s2 += clmp(s - 3000.0, 1500.0) * 0.18;
	if(s > 2000.0)
		s2 += clmp(s - 2000.0, 1000.0) * 0.08;
	if(s <= 2000.0)
		printf("Isento\n");
	else
		printf("R$ %.2f\n", s2);
	return 0;
}

double clmp(double value, double max)
{
	return value > max ? max : value;
}