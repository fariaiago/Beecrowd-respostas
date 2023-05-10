#include <stdio.h>
#include <string.h>

int main()
{
	char str[51];
	int n, p;
	int lx = scanf(" %d", &n);
	for(int i = 0; i < n; i++)
	{
		lx = scanf(" %s %d", str, &p);
		for (int j = 0; j < strlen(str); j++)
		{
			str[j] -= p;
			if(str[j] < 65)
				str[j] += 26;
		}
		printf("%s\n", str);
	}
	return 0;
}