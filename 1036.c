#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf(" %lf %lf %lf", &a, &b, &c);
	double delta = pow(b, 2) - 4 * a * c;
	if(delta < 0 || a == 0)
	{
		printf("Impossivel calcular\n");
		return 0;
	}
	printf("R1 = %.5f\nR2 = %.5f\n", (- b + sqrt(delta)) / (2.0 * a), (- b - sqrt(delta)) / (2.0 * a) );
	return 0;
}