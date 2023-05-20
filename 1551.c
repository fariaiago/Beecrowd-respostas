#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LETRAS "abcdefghijklmnopqrstuvwxyz"

bool eh_nova(char ltr, char ltrs[26])
{
	for (int i = 0; i < 26; i++)
		if(ltr == ltrs[i])
		{
			ltrs[i] = '1';
			return true;
		}
	return false;
}

int main(void)
{
	int n, scf = scanf(" %d ", &n);
	for (int i = 0; i < n; i++)
	{
		int n_letras = 0;
		char letra, letras[26];
		strncpy(letras, LETRAS, 26);
		scf = scanf("%c", &letra);
		while (letra != '\n' && scf != EOF)
		{
			if(eh_nova(letra, letras))
				n_letras++;
			scf = scanf("%c", &letra);
		}
		if (n_letras == 26)
			puts("frase completa");
		else if (n_letras >= 13)
			puts("frase quase completa");
		else
			puts("frase mal elaborada");
	}
	return 0;
}