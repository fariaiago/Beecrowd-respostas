#include <stdio.h>

void maior(double *, double *);

int main()
{
	double a, b, c;
	scanf(" %lf %lf %lf", &a, &b, &c);
	maior(&a, &b);
	maior(&a, &c);
	maior(&b, &c);
	double a2 = a * a, b2c2 = b * b + c * c;
	if(a >= b + c)
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
		printf("%s\n", a2 == b2c2 ? "TRIANGULO RETANGULO" : a2 < b2c2 ? "TRIANGULO ACUTANGULO" : "TRIANGULO OBTUSANGULO");
		printf("%s", (a == b && b == c) ? "TRIANGULO EQUILATERO\n" : (a == b || a == c || b == c) ? "TRIANGULO ISOSCELES\n" : "");
	}
	return 0;
}

void maior(double *a, double *b)
{
	double temp;
	if(*b > *a)
	{
		temp = *b;
		*b = *a;
		*a = temp;
	}
}