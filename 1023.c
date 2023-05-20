#include <stdio.h>
#include <stdlib.h>

typedef struct mEc
{
	int mrdrs;
	int cons;
} mec;

typedef struct no
{
	struct mEc *mc;
	struct no *prox;
} no;

typedef struct lista
{
	no* inicio;
	int tamanho;
} lista;

void inserir(lista *l, int m, int c)
{
	no *novo = malloc(sizeof(no));
	mec *mc = malloc(sizeof(mec));
	mc->mrdrs = m;
	mc->cons = c / m;
	novo->mc = mc;
	novo->prox = NULL;
	if(l->inicio == NULL)
		l->inicio = novo;
	else
	{
		no *tmp = l->inicio;
		if(novo->mc->cons < tmp->mc->cons)
		{
			novo->prox = tmp;
			l->inicio = novo;
		}
		else
		{
			while(tmp->prox != NULL)
			{
				if(tmp->prox->mc->cons > novo->mc->cons)
					break;
				tmp = tmp->prox;
			}
			novo->prox = tmp->prox;
			tmp->prox = novo;
		}
	}
	l->tamanho++;
}

lista *init()
{
	lista *l = malloc(sizeof(lista));
	l->inicio = NULL;
	return l;
}

void prnt(lista *l)
{
	no *tmp = l->inicio;
	while (tmp->prox != NULL)
	{
		printf("%d-%d ", tmp->mc->mrdrs, tmp->mc->cons);
		tmp = tmp->prox;
	}
	printf("%d-%d\n", tmp->mc->mrdrs, tmp->mc->cons);
}

int main(void)
{
	int n, m, c, lx = scanf(" %d", &n);
	for(int i = 0; n != 0; i++)
	{
		lista *l = init();
		double sc = 0.0, nc = 0.0;
		printf("Cidade# %d:\n", i + 1);
		for (int j = 0; j < n; j++)
		{
			lx = scanf("%d %d", &m, &c);
			inserir(l, m, c);
			sc += c;
			nc += m;
		}
		prnt(l);
		printf("Consumo medio: %.2f m3.\n", sc / nc);
		lx = scanf(" %d", &n);
		if(n != 0)
			puts("");
	}
	return 0;
}