#include <stdio.h>
#include <string.h>

int main()
{
	char ddd_table[100][20];
	memset(ddd_table, 0, 2000);
	strcpy(ddd_table[61], "Brasilia");
	strcpy(ddd_table[71], "Salvador");
	strcpy(ddd_table[11], "Sao Paulo");
	strcpy(ddd_table[21], "Rio de Janeiro");
	strcpy(ddd_table[32], "Juiz de Fora");
	strcpy(ddd_table[19], "Campinas");
	strcpy(ddd_table[27], "Vitoria");
	strcpy(ddd_table[31], "Belo Horizonte");
	int ddd;
	scanf(" %d", &ddd);
	char prnt[20];
	strcpy(prnt, ddd_table[ddd]);
	if(*prnt == 0)
		strcpy(prnt, "DDD nao cadastrado");
	printf("%s\n", prnt);
	return 0;
}