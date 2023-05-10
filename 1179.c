#include <stdio.h>

#define SIZE 5

void printNClean(char *nome, int vetor[SIZE])
{
	for(int j = 0; j < SIZE; j++)
	{
		if(vetor[j] != 0)
			printf("%s[%d] = %d\n", nome, j, vetor[j]);
		vetor[j] = 0;
	}
}

int main()
{
	int par[SIZE] = {0, 0, 0, 0, 0}, impar[SIZE] = {0, 0, 0, 0, 0}, qtP = 0, qtI = 0;
	for(int i = 0; i < 15; i++)
	{
		int n;
		int lx = scanf(" %d", &n);
		if(n % 2 == 0)
		{
			if(qtP < 5)
			{
				par[qtP] = n;
				qtP++;
			}
			else
			{
				printNClean("par", par);
				qtP = 0;
				par[qtP] = n;
				qtP++;
			}
		}
		else
		{
			if(qtI < 5)
			{
				impar[qtI] = n;
				qtI++;
			}
			else
			{
				printNClean("impar", impar);
				qtI = 0;
				impar[qtI] = n;
				qtI++;
			}
		}
	}
	printNClean("impar", impar);
	printNClean("par", par);
	return 0;
}