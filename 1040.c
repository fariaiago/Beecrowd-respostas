#include <stdio.h>

int main()
{
	double n1, n2, n3, n4;
	scanf(" %lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	double media1 = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
	printf("Media: %.1f\n", media1);
	if(media1 >= 5.0 && media1 < 7.0)
	{
		printf("Aluno em exame.\n");
		double ex;
		scanf(" %lf", &ex);
		double mf = (media1 + ex) / 2;
		printf("Nota do exame: %.1f\n%s\nMedia final: %.1f\n", ex, mf < 5.0 ? "Aluno reprovado." : "Aluno aprovado.", mf);
	}
	else
	{
		printf("%s\n", media1 < 5.0 ? "Aluno reprovado." : "Aluno aprovado.");
	}
	return 0;
}