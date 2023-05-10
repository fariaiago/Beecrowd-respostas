#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, acc = 0;
	int scf = scanf(" %d", &n);
	getchar();
	for(int i = 0; i < n; i++)
	{
		char c;
		scf = scanf("%c", &c);
		do
		{
			switch (c)
			{
			case '1':
				acc += 2;
				break;
			case '2':
			case '3':
			case '5':
				acc += 5;
				break;
			case '4':
				acc += 4;
				break;
			case '6':
			case '9':
			case '0':
				acc += 6;
				break;
			case '7':
				acc += 3;
				break;
			case '8':
				acc += 7;
				break;
			default:
				break;
			}
			scf = scanf("%c", &c);
		}
		while (c != '\n' && scf == 1);
		printf("%d leds\n", acc);
		acc = 0;
	}
	return 0;
}