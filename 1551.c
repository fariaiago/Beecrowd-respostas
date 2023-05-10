#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct no
{
	char ltr;
	struct no *prox;
} no;


typedef struct lista
{
	no* inicio;
	int tamanho;
} lista;

void inserir(lista *l, char ltr)
{
	no *novo = malloc(sizeof(no));
	novo->ltr = ltr;
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
	l->tamanho++;
}

lista *init()
{
	lista *l = malloc(sizeof(lista));
	l->inicio = NULL;
	return l;
}

bool eNovo(lista *l, char ltr)
{
	if(isalpha(ltr) == 0)
		return false;
	if (l->inicio == NULL)
		return true;
	
	no *tmp = l->inicio;
	while (tmp != NULL)
	{
		if (tmp->ltr  == ltr)
			return false;
		tmp = tmp->prox;
	}
	return true;
}

void list_print(lista *l)
{
	no *tmp = l->inicio;
	while (tmp != NULL)
	{
		printf("%c -> ", tmp->ltr);
		tmp = tmp->prox;
	}
}

int main()
{
	lista *letras;
	char letra;
	int n, scf = 0;
	scf = scanf(" %d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		letras = init();
		scf = scanf("%c", &letra);
		while (letra != '\n' && scf != EOF)
		{
			if(eNovo(letras, letra))
			{
				inserir(letras, letra);
			}
			scf = scanf("%c", &letra);
		}
		//list_print(letras);
		if (letras->tamanho == 26)
		{
			printf("frase completa\n");
		}
		else if (letras->tamanho >= 13)
		{
			printf("frase quase completa\n");
		}
		else
		{
			printf("frase mal elaborada\n");
		}
		free(letras);
	}
	return 0;
}