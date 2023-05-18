#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>

#define N 1000.0

/**
 * Representa ponto com coordenada X e Y
*/
typedef struct ponto
{
	int x;
	int y;
} ponto;

ponto *jogar();
int randint(int);

int main()
{
	setlocale(LC_NUMERIC, "French_Canada.1252");
	//Seeda o rand()
	srand(time(NULL));

	//Roda 1000 rodadas
	for (int j = 0; j < 100; j++)
	{
		double sx = 0, sxx = 0, syy = 0, sy = 0, sxy = 0;
		for (int i = 0; i < N; i++)
		{
			ponto *p = jogar();
			//Imprime o valor da rodada na tela, que permite que o valor seja importado numa planilha
			//printf("%d, %d\n", p->x, p->y);
			sx += p->x;
			sy += p->y;
			sxx += pow(p->x, 2);
			syy += pow(p->y, 2);
			sxy += p->x * p->y;
		}
		double covar = sxy - (sx * sy) / N, varX = sxx - pow(sx, 2) / N, varY = syy - pow(sy, 2) / N;
		printf("%f\n", covar / sqrt(varX * varY));
	}
	return 0;
}

/**
 * Joga uma rodada e retorna um ponto
*/
ponto *jogar()
{
	int n_cara = 0, n_tentativas = 0;
	while(n_cara < 2 && n_tentativas < 5)
	{
		// Cara = 0, coroa = 1;
		if(randint(2) == 0)
			n_cara++;
		n_tentativas++;
	}
	ponto *p = malloc(sizeof(ponto));
	p->x = n_tentativas;
	p->y = n_cara;
	return p;
}

/**
 * https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
 * Garante uniformidade quando o rand() for filtrado
*/
int randint(int n)
{
	int end = RAND_MAX / n;
	end *= n;
	int r;
	while ((r = rand()) >= end);
	return r % n;
}