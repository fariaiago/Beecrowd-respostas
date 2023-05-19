#include <stdio.h>
#include <stdbool.h>

double ab(double);
bool validarLado(double, double, double);

int main()
{
	double a, b, c;
	scanf(" %lf %lf %lf", &a, &b, &c);
	bool triFlag = validarLado(a, b, c) && validarLado(a, c, b) && validarLado(b, c, a);
	if(triFlag)
	{
		printf("Perimetro = %.1f\n", a + b + c);
	}
	else
	{
		printf("Area = %.1f\n", (a + b)* c / 2);
	}
	return 0;
}

bool validarLado(double n1, double n2, double n3)
{
	return ab(n1 - n2) < n3 && n3 < n1 + n2;
}

double ab(double n)
{
	return n < 0 ? -n : n;
}