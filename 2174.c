#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct no
{
	char str[13];
	struct no *prox;
} no;


typedef struct lista
{
	no* inicio;
} lista;

void inserir(lista *l, char str[13])
{
	no *novo = malloc(sizeof(no));
	strcpy(novo->str, str);
	novo->prox = NULL;
	if(l->inicio == NULL)
		l->inicio = novo;
	else
	{
		no *tmp = l->inicio;
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		tmp->prox = novo;
	}
}

lista *init()
{
	lista *l = malloc(sizeof(lista));
	l->inicio = NULL;
	return l;
}

bool isNew(lista *l, char pmkn[13])
{
	if (l->inicio == NULL)
		return true;
	no *tmp = l->inicio;
	while (tmp != NULL)
	{
		if (strcmp(tmp->str, pmkn) == 0)
			return false;
		tmp = tmp->prox;
	}
	return true;
}

int main()
{
	lista *repetidos = init();
	char pmkn[13];
	int n, lx = 0, n_pmkn = 151;
	lx = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		lx = scanf(" %s", pmkn);
		if(isNew(repetidos, pmkn))
		{
			n_pmkn--;
			inserir(repetidos, pmkn);
		}
	}
	printf("Falta(m) %d pomekon(s).\n", n_pmkn);
	return 0;
}