#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ponto
{
	int x;
	int y;
} ponto;

ponto *jogar();
int randint(int);

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		ponto *p = jogar();
		printf("%d, %d\n", p->x, p->y);
	}
	return 0;
}

ponto *jogar()
{
	int n_cara = 0, n_tentativas = 0;
	while(n_cara < 2 && n_tentativas < 5)
	{
		if(randint(2) == 0)
			n_cara++;
		n_tentativas++;
	}
	ponto *p = malloc(sizeof(ponto));
	p->x = n_tentativas;
	p->y = n_cara;
	return p;
}

int randint(int n)
{
	int end = RAND_MAX / n;
	end *= n;
	int r;
	while ((r = rand()) >= end);
	return r % n;
}